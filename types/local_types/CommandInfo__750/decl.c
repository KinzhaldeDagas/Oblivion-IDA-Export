struct CommandInfo
{
const char *longName;
const char *shortName;
UInt32 opcode;
const char *helpText;
UInt16 needsParent;
UInt16 numParams;
ParamInfo *params;
Cmd_Execute *execute;
Cmd_Parse *parse;
Cmd_Eval *eval;
UInt32 flags;
};
