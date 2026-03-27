void __thiscall sub_529530(float *this, float a2)
{
  TESForm::ModReferenceList **p_next; // ebx
  signed int v4; // edi
  signed int v5; // eax
  int *v6; // ecx
  NiRenderedTexture *vtbl; // eax
  int v8; // esi
  int v9; // eax
  float v10; // [esp+18h] [ebp-13Ch]
  float v11; // [esp+18h] [ebp-13Ch]
  float Age; // [esp+18h] [ebp-13Ch]
  double v13; // [esp+1Ch] [ebp-138h]
  _DWORD *a1[24]; // [esp+24h] [ebp-130h] BYREF
  _DWORD *v15[49]; // [esp+84h] [ebp-D0h] BYREF
  unsigned int v16; // [esp+150h] [ebp-4h]

  if ( TESDataHandler_g_VampireRace )
  {
    p_next = &TESDataHandler_g_VampireRace[0x1B].member.modlist.next;
    sub_552880((_DWORD *)this + 0x5A);
    v4 = 0;
    v13 = (a2 - 0.0) / (fCostant_100 - 0.0);
    do
    {
      v10 = sub_5538F0((int)p_next, 1, 0, v4);
      v11 = (v10 - 0.0) * v13 + 0.0;
      sub_5539E0((int)(this + 0x5A), 1, 0, v4++, v11);
    }
    while ( v4 < 0x1F );
    ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
    v16 = 0;
    sub_5221C0((int *)this, a1);
    Age = BSFaceGen_GetAge(a1, 0, 0);
    v5 = Double_To_SInt32(a2 / fCostant_100 * (double)iVampirismAgeOffset + Age);
    TESNPC_SetFaceGenAge(this, v5);
    FaceGenHeadParameters_Ctor(v15);
    v6 = *((int **)this + 0x3A);
    LOBYTE(v16) = 1;
    TESRace_GetFaceGenHeadParameters(v6, (int)this, (int)v15);
    BSFaceGen_DoSomethingWithFaceGenNode(*((_DWORD *)this + 0x75), v15);
    BSFaceGen_DoSomethingWithFaceGenNode(*((_DWORD *)this + 0x76), v15);
    if ( a2 <= 0.0 )
    {
      vtbl = *((NiRenderedTexture **)this + 0x74);
    }
    else
    {
      if ( TESDataHandler_g_VampireRace == (TESForm *)0xFFFFFF58 )
      {
LABEL_9:
        v8 = *((_DWORD *)this + 0x75);
        if ( v8 )
        {
          v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x9C))(v8);
          if ( v9 )
            *(float *)(v9 + 0x1DC) = a2;
        }
        LOBYTE(v16) = 0;
        FaceGenHeadParameters_Dtor((unsigned int *)v15);
        v16 = 0xFFFFFFFF;
        _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
        return;
      }
      vtbl = (NiRenderedTexture *)TESDataHandler_g_VampireRace[7].vtbl;
    }
    sub_5263B0(this, vtbl);
    goto LABEL_9;
  }
}
