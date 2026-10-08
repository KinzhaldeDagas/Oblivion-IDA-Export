struct se_translator_ctx
{
ULONG64 dest_frame;
ULONG64 orig_frame;
EXCEPTION_RECORD_0 *seh_rec __offset(OFF64|AUTO);
DISPATCHER_CONTEXT *dispatch __offset(OFF64|AUTO);
const cxx_function_descr *descr __offset(OFF64|AUTO);
};
