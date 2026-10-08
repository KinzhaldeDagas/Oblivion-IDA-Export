void __thiscall sub_52B840(float *this)
{
  float *v2; // eax
  unsigned int v3; // ebx
  int v4; // ecx
  const FaceGenHeadParameters *DefaultHeadParameters; // eax
  float *v6; // edi
  float *v7; // esi
  const char **v8; // edi
  float *v9; // esi
  int v10; // ebx
  bool v11; // zf
  float *v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  v2 = this + 0x14; /*0x52b847*/
  v3 = 0; /*0x52b84a*/
  *(this + 0x14) = 0.0; /*0x52b84e*/
  *(this + 0x15) = 0.0; /*0x52b850*/
  *(this + 0x16) = 0.0; /*0x52b853*/
  *(this + 0x17) = 0.0; /*0x52b856*/
  *(this + 0x18) = 0.0; /*0x52b859*/
  *(this + 0x19) = 0.0; /*0x52b85c*/
  *(this + 0x1A) = 0.0; /*0x52b85f*/
  *(this + 0x1B) = 0.0; /*0x52b862*/
  *(this + 0x1C) = 0.0; /*0x52b866*/
  v4 = 7; /*0x52b86a*/
  do /*0x52b879*/
  {
    *(_BYTE *)v2 = 0xFF; /*0x52b870*/
    v2 = (float *)((char *)v2 + 2); /*0x52b873*/
    --v4; /*0x52b876*/
  }
  while ( v4 ); /*0x52b879*/
  *(this + 0x1A) = 1.0; /*0x52b883*/
  *(this + 0x18) = 1.0; /*0x52b887*/
  *(this + 0x1B) = 1.0; /*0x52b88a*/
  *(this + 0x19) = 1.0; /*0x52b88d*/
  *(this + 0xC0) = 0.0; /*0x52b892*/
  *(this + 0x28) = 0.0; /*0x52b898*/
  *(this + 0xC1) = 0.0; /*0x52b89e*/
  *(this + 0x29) = 0.0; /*0x52b8a4*/
  *(this + 0x25) = 0.0; /*0x52b8aa*/
  *(this + 0x26) = 0.0; /*0x52b8b0*/
  *((_BYTE *)this + 0x9C) = 0; /*0x52b8b6*/
  DefaultHeadParameters = FaceGenManager_GetDefaultHeadParameters(); /*0x52b8bc*/
  FaceGenHeadParameters_Copy(DefaultHeadParameters, (FaceGenHeadParameters *)(this + 0xA7)); /*0x52b8c2*/
  FaceGenHeadParameters_Initialize((FaceGenHeadParameters *)(this + 0xA7)); /*0x52b8c8*/
  *((_WORD *)this + 0x17E) = 0; /*0x52b8d0*/
  v6 = this + 0x6E; /*0x52b8d7*/
  v7 = this + 0x38; /*0x52b8dd*/
  do /*0x52b920*/
  {
    (**(void (__thiscall ***)(float *))v7)(v7); /*0x52b8e9*/
    (*(void (__thiscall **)(float *, char *))(*(_DWORD *)v7 + 0x18))(v7, off_B10CCC[v3]); /*0x52b8f9*/
    (**(void (__thiscall ***)(float *))v6)(v6); /*0x52b901*/
    BSStringT_Set((BSStringT *)(v6 + 1), off_B10CF0[v3++], 0); /*0x52b90f*/
    v7 += 6; /*0x52b917*/
    v6 += 3; /*0x52b91a*/
  }
  while ( v3 < 9 ); /*0x52b920*/
  v8 = (const char **)off_B10D14; /*0x52b928*/
  v12 = this + 0x2C; /*0x52b92d*/
  v9 = this + 0x89; /*0x52b931*/
  v13 = 2; /*0x52b937*/
  do /*0x52b97d*/
  {
    v10 = 5; /*0x52b940*/
    do /*0x52b963*/
    {
      (**(void (__thiscall ***)(float *))v9)(v9); /*0x52b94b*/
      BSStringT_Set((BSStringT *)(v9 + 1), *v8++, 0); /*0x52b955*/
      v9 += 3; /*0x52b95d*/
      --v10; /*0x52b960*/
    }
    while ( v10 ); /*0x52b963*/
    (**(void (__thiscall ***)(float *))v12)(v12); /*0x52b96f*/
    v11 = v13-- == 1; /*0x52b974*/
    v12 += 6; /*0x52b979*/
  }
  while ( !v11 ); /*0x52b97d*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x52b988*/
}
