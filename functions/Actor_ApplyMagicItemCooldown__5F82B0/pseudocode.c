void __thiscall Actor_ApplyMagicItemCooldown(_DWORD *this, int a2)
{
  int v3; // esi

  if ( a2 )
  {
    if ( !Actor_GetMagicItemCooldown(this, a2) )
    {
      v3 = FormHeapAlloc(8u);
      *(_DWORD *)v3 = a2;
      *(float *)(v3 + 4) = dbl_A2F938 / sub_4029D0(&TimeGlobals) * dbl_A2F920;
      BSSimpleList_PushBack(this + 0x27, v3);
    }
  }
}
