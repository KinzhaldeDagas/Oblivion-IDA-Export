char __stdcall sub_74FB80(NiObject *a1, __int16 a2)
{
  int v2; // eax
  int v3; // eax
  int v5; // eax

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( a1 )
      {
        v5 = (int)a1->__vftable->GetType(a1);
        if ( v5 )
        {
          while ( (char *)v5 != dword_B3E7E8 )
          {
            v5 = *(_DWORD *)(v5 + 4);
            if ( !v5 )
              goto LABEL_16;
          }
          return 1;
        }
      }
LABEL_16:
      if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3EA50, a1) )
        return 1;
    }
  }
  else if ( a1 )
  {
    v2 = (int)a1->__vftable->GetType(a1);
    if ( v2 )
    {
      while ( (char *)v2 != dword_B3CFBC )
      {
        v2 = *(_DWORD *)(v2 + 4);
        if ( !v2 )
          goto LABEL_6;
      }
      return 1;
    }
LABEL_6:
    v3 = (int)a1->__vftable->GetType(a1);
    if ( v3 )
    {
      while ( (char *)v3 != dword_B3CF5C )
      {
        v3 = *(_DWORD *)(v3 + 4);
        if ( !v3 )
          return 0;
      }
      return 1;
    }
  }
  return 0;
}
