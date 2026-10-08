struct RpcContextElement
{
unsigned __int16 context_id;
unsigned __int8 num_syntaxes;
unsigned __int8 reserved;
RPC_SYNTAX_IDENTIFIER abstract_syntax;
RPC_SYNTAX_IDENTIFIER transfer_syntaxes[1];
};
