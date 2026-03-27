__int16 __thiscall sub_69EDD0(_DWORD *this, int a2, int a3)
{
  __int16 v4; // dx
  int v5; // eax
  NiObject *v6; // eax
  __int16 v8; // [esp+Ch] [ebp+8h]

  v4 = sub_69DB90(a2, a3) + 2;
  v5 = *(this + 0xC);
  v8 = v4;
  if ( v5 && (v6 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v5 + 0xC))) != 0 )
    return sub_4DA760((int)v6) + v8;
  else
    return v8;
}
