char __thiscall sub_69E9A0(char *this)
{
  int v2; // eax
  int v3; // ecx
  const char *v4; // eax
  int v5; // eax
  NiObject *v6; // eax
  int **v7; // edi
  Ni2DBuffer *v8; // eax
  double v9; // st7
  NiObject *v10; // eax
  NiObject *v11; // edi
  int v12; // ebx
  float a2; // [esp+18h] [ebp-4h]

  v2 = *((_DWORD *)this + 6);
  if ( v2 )
  {
    *((float *)this + 8) = *(float *)(v2 + 4);
    *(this + 0x24) = (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 0xC) + 0x1C) + 0x58) & 0x400) == 0;
  }
  v3 = *((_DWORD *)this + 7);
  if ( !v3 )
    return 0;
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x154))(v3) )
    return 0;
  if ( *((PlayerCharacter **)this + 7) == TESDataHandler_g_PlayerRef )
    *(this + 0x29) = TESDataHandler_g_PlayerRef->isThirdPerson;
  v4 = *((const char **)this + 0xB);
  if ( !v4 )
    return 0;
  if ( !*v4 )
    return 0;
  v5 = sub_439EB0((int *)ModelLoaderPtr, v4, 0, 0, 1);
  if ( v5 )
  {
    v6 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v5 + 0xC));
    if ( v6 )
    {
      if ( !sub_4715A0(v6, (int)"SpecialIdle_HitEffect") )
        return 0;
    }
  }
  v7 = (int **)(this + 0x30);
  v8 = (Ni2DBuffer *)sub_69FBF0(*((const char **)this + 0xB));
  NiSmartPointer_Set__((Ni2DBuffer **)this + 0xC, v8);
  QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, *((_DWORD *)this + 0xB), 0, 1);
  if ( !*((_DWORD *)this + 0xC) )
    return 0;
  if ( !(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 7) + 0x154))(*((_DWORD *)this + 7)) )
    return 0;
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x70))(this);
  sub_6F94E0(*v7);
  v9 = (double)(int)Seed;
  if ( (int)Seed < 0 )
    v9 = v9 + flt_A2FC78;
  a2 = v9 / dbl_A2FC70;
  NiAVObject_UpdateNiAVObject((NiAVObject *)*v7, a2, 1);
  v10 = NiRTTI_Cast(&stru_B3CAC0, (NiObject *)(*v7)[3]);
  v11 = v10;
  if ( !v10 )
    return 0;
  v12 = sub_4715A0(v10, (int)"SpecialIdle_HitEffect");
  if ( !v12 )
    return 0;
  sub_4715C0(v11, 0.0);
  sub_470B20((_DWORD *)v12, 0, 0, 1.0, 0.0, 0);
  LOWORD(v11[1].__vftable) |= 8u;
  if ( *((float *)this + 8) > 0.0 )
    *(float *)(v12 + 0x48) = *(float *)(v12 + 0x2C) + *((float *)this + 8);
  return 1;
}
