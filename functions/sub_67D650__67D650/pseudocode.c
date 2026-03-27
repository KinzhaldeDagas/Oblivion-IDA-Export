char __thiscall sub_67D650(int this, TESObjectREFR *a2)
{
  char *v3; // ecx
  float *v4; // edi
  float *v5; // eax
  float *v6; // eax
  float *v7; // eax
  float *v8; // eax
  float v10; // [esp+0h] [ebp-14h]
  float v11; // [esp+0h] [ebp-14h]

  if ( !a2 )
    return 0;
  if ( *(_DWORD *)(this + 0x1C) && (v3 = *(char **)(this + 0x24)) != 0 )
  {
    v10 = flt_A34A80;
    v4 = (float *)(this + 0xC);
    v5 = (float *)sub_4BEF40(v3);
    if ( sub_480520((float *)(this + 0xC), v5, v10) < 0 )
    {
      v6 = (float *)sub_4BEF40(*(char **)(this + 0x24));
      if ( sub_687C30(a2, v6, (float *)(this + 0xC)) )
      {
        v11 = flt_A34A80;
        v7 = (float *)sub_4BEF40(*(char **)(this + 0x1C));
        if ( sub_480520((float *)this, v7, v11) < 0 )
        {
          v8 = (float *)sub_4BEF40(*(char **)(this + 0x1C));
          if ( sub_687C30(a2, (float *)this, v8) )
            return 1;
        }
      }
    }
  }
  else
  {
    v4 = (float *)(this + 0xC);
  }
  if ( sub_480520((float *)this, v4, flt_A34A80) >= 0 )
    return 0;
  else
    return sub_687AA0(a2, (float *)this, v4);
}
