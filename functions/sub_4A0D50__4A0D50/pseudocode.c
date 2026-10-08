char __thiscall sub_4A0D50(NiObjectNET *this, float a2)
{
  int v3; // eax
  NiObject *v4; // eax
  int v5; // eax
  NiObject *v6; // eax
  NiObject *v7; // eax
  NiObjectVtbl *vftable; // ecx
  int v9; // eax
  NiObject *v10; // eax
  NiObject *v11; // eax
  char result; // al
  char v13; // [esp+Bh] [ebp-1h] BYREF

  if ( a2 <= 0.0 ) /*0x4a0d5f*/
    return sub_70A190((int)this, a2); /*0x4a0d5f*/
  v3 = sub_4A05E0((int)this); /*0x4a0d66*/
  if ( v3
    || (v4 = sub_6FA970(this)) != 0
    && (v4[1].members.m_uiRefCount & 2) != 0
    && (*((_WORD *)this + 0x5B) ? (v5 = **((_DWORD **)this + 0x2C)) : (v5 = 0),
        (v3 = NiAVObject_FindBhkCollisionObjectRecursive(v5)) != 0) )
  {
    v6 = *(NiObject **)(v3 + 0x10); /*0x4a0daa*/
  }
  else
  {
    v6 = 0; /*0x4a0daf*/
  }
  v7 = NiRTTI_Cast((BSStringT *)&OB_ShaderConstantStorage_010201A0[0x187DC], v6); /*0x4a0db7*/
  if ( v7 ) /*0x4a0dc1*/
  {
    vftable = v7[1].__vftable; /*0x4a0dc3*/
    if ( vftable ) /*0x4a0dc8*/
    {
      if ( *sub_8A63F0(vftable, &v13) ) /*0x4a0dd4*/
        return sub_70A190((int)this, a2); /*0x4a0dd4*/
    }
  }
  if ( *((_WORD *)this + 0x5B) ) /*0x4a0dde*/
  {
    v9 = **((_DWORD **)this + 0x2C); /*0x4a0dee*/
    if ( v9 ) /*0x4a0df2*/
    {
      v10 = *(NiObject **)(v9 + 0xC); /*0x4a0df4*/
      if ( v10 ) /*0x4a0df9*/
      {
        v11 = NiRTTI_Cast(&stru_B3CAC0, v10); /*0x4a0e01*/
        if ( v11 ) /*0x4a0e0b*/
        {
          if ( ((int)v11[1].__vftable & 8) != 0 ) /*0x4a0e16*/
            return sub_70A190((int)this, a2); /*0x4a0e16*/
        }
      }
    }
  }
  result = sub_47F7B0((float *)this, (int)g_WorldSceneReceiverRoot->camera); /*0x4a0e26*/
  if ( result ) /*0x4a0e30*/
    return sub_70A190((int)this, a2); /*0x4a0e3c*/
  return result; /*0x4a0e41*/
}
