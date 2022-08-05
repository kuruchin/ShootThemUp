// Shoot Them Up Game. All Rights Are Left.


#include "STUGameModeBase.h"
#include "Player/STUBaseCharacter.h"
#include "Player/STUPlayerController.h"

ASTUGameModeBase::ASTUGameModeBase()
{
    DefaultPawnClass = ASTUGameModeBase::StaticClass();
    PlayerControllerClass = ASTUGameModeBase::StaticClass();
}
