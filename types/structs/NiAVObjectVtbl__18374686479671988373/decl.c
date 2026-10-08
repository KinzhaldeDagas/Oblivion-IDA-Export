struct __declspec(align(4)) NiAVObjectVtbl
{
NiObjectVtbl super;
void (__thiscall *UpdateControllers)(NiAVObject *this, float fTime);
void (__thiscall *Unk_14)(NiAVObject *this);
void (__thiscall *ApplyTransform)(NiAVObject *this, NiMatrix33 *Mat, NiPoint3 *Trn, bool OnLeft);
NiAVObject *(__thiscall *GetObjectByName)(NiAVObject *this, const char *Name);
void *(__thiscall *Unk_17)(NiAVObject *this);
void (__thiscall *UpdateDownwardPass)(NiAVObject *this, float fTime, bool bUpdateControllers);
void (__thiscall *UpdateSelectedDownwardPass)(NiAVObject *this, float fTime);
void (__thiscall *UpdateRigidDownwardPass)(NiAVObject *this, float fTime);
void (__thiscall *UpdatePropertiesDownward)(NiAVObject *this, NiPropertyState *ParentState);
void (__thiscall *UpdateEffectsDownward)(NiAVObject *this, NiDynamicEffectState *ParentState);
void (__thiscall *UpdateWorldData)(NiAVObject *this);
void (__thiscall *UpdateWorldBound)(NiAVObject *this);
void (__thiscall *OnVisible)(NiAVObject *this, NiCullingProcess *CullingProcess);
void (__thiscall *Unk_20)(NiAVObject *this, void *arg);
};
