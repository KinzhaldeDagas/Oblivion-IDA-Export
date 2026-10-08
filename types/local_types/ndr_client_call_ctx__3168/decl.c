struct ndr_client_call_ctx
{
MIDL_STUB_MESSAGE *stub_msg __offset(OFF64|AUTO);
INTERPRETER_OPT_FLAGS Oif_flags;
INTERPRETER_OPT_FLAGS2 ext_flags;
const NDR_PROC_HEADER *proc_header __offset(OFF64|AUTO);
void *This __offset(OFF64|AUTO);
PFORMAT_STRING handle_format __offset(OFF64|AUTO);
handle_t hbinding __offset(OFF64|AUTO);
};
