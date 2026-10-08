void __thiscall sub_521ED0(char *this, TESForm *a2)
{
  _DWORD *v3; // edi
  int v4; // ebx
  int v5; // eax
  char *v6; // esi
  bool v7; // zf
  int *v8; // eax

  v3 = OblivionDynamicCast( /*0x521eed*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESNPC `RTTI Type Descriptor',
         0);
  if ( v3 ) /*0x521ef4*/
  {
    TESSpellList_CopyFrom((_DWORD *)this + 0x15, a2); /*0x521efe*/
    sub_46E480((_DWORD *)this + 0x39, a2); /*0x521f0a*/
    TESActorBaseData_CopyFrom((unsigned int *)this + 9, a2); /*0x521f13*/
    TESHealthForm_CopyFrom((_DWORD *)this + 0x20, a2); /*0x521f1f*/
    TESAttributes_CopyFrom(this + 0x88, a2); /*0x521f2b*/
    TESFullName_CopyFrom((unsigned int *)this + 0x28, a2); /*0x521f37*/
    TESModel_CopyFrom((float *)this + 0x2B, a2); /*0x521f43*/
    *((_DWORD *)this + 0x3B) = v3[0x3B]; /*0x521f4e*/
    *((_DWORD *)this + 0x3C) = v3[0x3C]; /*0x521f5a*/
    *((_DWORD *)this + 0x3D) = v3[0x3D]; /*0x521f66*/
    *((_DWORD *)this + 0x3E) = v3[0x3E]; /*0x521f72*/
    v4 = *(_DWORD *)this; /*0x521f7e*/
    *((_DWORD *)this + 0x3F) = v3[0x3F]; /*0x521f80*/
    *(this + 0x100) = *((_BYTE *)v3 + 0x100); /*0x521f8c*/
    *((_DWORD *)this + 0x41) = v3[0x41]; /*0x521f98*/
    *((_DWORD *)this + 0x72) = v3[0x72]; /*0x521fa4*/
    *((float *)this + 0x73) = *((float *)v3 + 0x73); /*0x521fb0*/
    *((_DWORD *)this + 0x74) = v3[0x74]; /*0x521fbc*/
    *((_DWORD *)this + 0x7A) = v3[0x7A]; /*0x521fc8*/
    v5 = (*(int (__thiscall **)(_DWORD *))(*v3 + 0x120))(v3); /*0x521fd8*/
    (*(void (__thiscall **)(char *, int))(v4 + 0x124))(this, v5); /*0x521fe3*/
    if ( (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 0x128))(this, 0x45) ) /*0x521ff1*/
      v6 = this + 0x168; /*0x521ff7*/
    else
      v6 = this + 0x108; /*0x521fff*/
    v7 = (*(int (__thiscall **)(_DWORD *, int))(*v3 + 0x128))(v3, 0x45) == 0; /*0x522013*/
    v8 = v3 + 0x5A; /*0x522015*/
    if ( v7 ) /*0x52201b*/
      v8 = v3 + 0x42; /*0x52201d*/
    FaceGenHeadParameters_Copy(v8, (int)v6); /*0x522025*/
  }
}
