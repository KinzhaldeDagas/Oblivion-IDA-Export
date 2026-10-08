struct actctx_loader
{
ACTIVATION_CONTEXT *actctx __offset(OFF64|AUTO);
assembly_identity *dependencies __offset(OFF64|AUTO);
unsigned int num_dependencies;
unsigned int allocated_dependencies;
};
