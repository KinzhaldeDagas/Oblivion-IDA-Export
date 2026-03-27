void __thiscall sub_65FB30(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  if ( !(*(this + 0x61) % iLevelUpSkillCount) )
  {
    if ( !*(this + 0x16D) )
    {
      v2 = (_DWORD *)FormHeapAlloc(8u);
      if ( v2 )
      {
        *v2 = 0;
        v2[1] = 0;
      }
      else
      {
        v2 = 0;
      }
      *(this + 0x16D) = v2;
    }
    v3 = (_DWORD *)FormHeapAlloc(8u);
    if ( v3 )
    {
      *v3 = 0;
      v3[1] = 0;
      BSSimpleList_PushFront((_DWORD *)*(this + 0x16D), (int)v3);
    }
    else
    {
      BSSimpleList_PushFront((_DWORD *)*(this + 0x16D), 0);
    }
  }
}
