struct OblivionTileActionNode
{
OblivionTileActionNode *previousAction;
OblivionTileActionNode *nextAction;
OblivionTileActionOperand operand;
unsigned int opcode;
OblivionTileActionNode *previousReaction;
OblivionTileActionNode *nextReaction;
};
