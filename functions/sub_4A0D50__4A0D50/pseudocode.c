char __thiscall sub_4A0D50(_WORD *this, float a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  NiObject *v6; // eax
  NiObject *v7; // eax
  NiObjectVtbl *vftable; // ecx
  int v9; // eax
  NiObject *v10; // eax
  NiObject *v11; // eax
  char result; // al
  char v13; // [esp+Bh] [ebp-1h] BYREF

  if ( a2 <= 0.0 )
    return sub_70A190((int)this, a2);
  v3 = sub_4A05E0((int)this);
  if ( v3
    || (v4 = sub_6FA970(this)) != 0
    && (*(_DWORD *)(v4 + 0xC) & 2) != 0
    && (*(this + 0x5B) ? (v5 = **((_DWORD **)this + 0x2C)) : (v5 = 0), (v3 = sub_480340(v5)) != 0) )
  {
    v6 = *(NiObject **)(v3 + 0x10);
  }
  else
  {
    v6 = 0;
  }
  v7 = NiRTTI_Cast((BSStringT *)dword_BA7D84, v6);
  if ( v7 )
  {
    vftable = v7[1].__vftable;
    if ( vftable )
    {
      if ( *sub_8A63F0(vftable, &v13) )
        return sub_70A190((int)this, a2);
    }
  }
  if ( *(this + 0x5B) )
  {
    v9 = **((_DWORD **)this + 0x2C);
    if ( v9 )
    {
      v10 = *(NiObject **)(v9 + 0xC);
      if ( v10 )
      {
        v11 = NiRTTI_Cast(&stru_B3CAC0, v10);
        if ( v11 )
        {
          if ( ((int)v11[1].__vftable & 8) != 0 )
            return sub_70A190((int)this, a2);
        }
      }
    }
  }
  result = sub_47F7B0((float *)this, (int)g_worldScenegraph->camera);
  if ( result )
    return sub_70A190((int)this, a2);
  return result;
}
