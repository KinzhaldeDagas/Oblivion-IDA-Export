struct NiShaderVtbl
{
NiRefObjectVtbl super;
void *(__thiscall *GetType)(NiShader *this);
UInt32 (__thiscall *No08)(NiShader *this);
UInt32 (__thiscall *No0C)(NiShader *this);
UInt32 (__thiscall *No10)(NiShader *this);
UInt32 (__thiscall *No14)(NiShader *this);
UInt32 (__thiscall *UpdateInternalVars)(NiShader *this, void *a2);
void (__thiscall *No1C)(NiShader *this);
};
