NiAVObject *__thiscall sub_533930(_DWORD *this, int a2)
{
  int v2; // eax
  int *v3; // ecx
  Atmosphere *v4; // ecx
  int v6; // [esp+4h] [ebp-8h] BYREF

  v2 = *(_DWORD *)(*(this + 4) + 0x30 * a2 + 0x28);
  if ( v2
    && (v3 = (int *)(v2 + *(_DWORD *)(v2 + 0x10))) != 0
    && (v4 = (Atmosphere *)*sub_47F990(v3, &v6, (int)dword_BA7B80)) != 0 )
  {
    return sub_452A60(v4);
  }
  else
  {
    return 0;
  }
}
