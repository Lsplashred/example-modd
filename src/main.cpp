#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>
using namespace geode::prelude;

class $($modify(PlayerObject)) {
    void pushButton(PlayerButton button) {
        PlayerObject::pushButton(button);
        if (button == PlayerButton::Jump) {
            if (this->m_isOnGround) {
                this->m_yVelocity = 9.5; 
            }
        }
    }
};
