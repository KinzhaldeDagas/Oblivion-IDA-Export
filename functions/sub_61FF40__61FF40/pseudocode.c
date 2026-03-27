void __usercall sub_61FF40(int a1@<ecx>, double a2@<st3>)
{
  char ***v4; // eax
  char **v5; // eax
  BSSimpleList_VoidPtr *v6; // edi
  float v7; // [esp+4h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 0x70) != 8 && *(float *)(a1 + 0x138) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0x134) )
  {
    v7 = flt_B37288;
    *(float *)(a1 + 0x134) = *(float *)(a1 + 0x44);
    *(float *)(a1 + 0x138) = v7;
    *(float *)(a1 + 0x13C) = flt_A30634;
    if ( (*(_DWORD *)(a1 + 0x178) > dword_B372B0
       || Actor_IsSwimming(*(_DWORD **)(a1 + 0x3C))
       || !sub_61D9B0(a1, a2, *(char ***)(a1 + 0x9C)))
      && !sub_61D9B0(a1, a2, *(char ***)(a1 + 0x94))
      && !sub_61D9B0(a1, a2, *(char ***)(a1 + 0x98)) )
    {
      if ( !*(_DWORD *)(a1 + 0x90) )
      {
        v4 = *(char ****)(a1 + 0x68);
        if ( v4 )
        {
          v5 = *v4;
          *(_DWORD *)(a1 + 0x90) = v5;
          if ( v5 )
            sub_41A610(*v5, 0);
          sub_67F100(*(_DWORD **)(a1 + 0x68));
          v6 = *(BSSimpleList_VoidPtr **)(a1 + 0x68);
          if ( BSSimpleList_IsEmpty(v6) )
          {
            FormHeapFree((unsigned int)v6);
            *(_DWORD *)(a1 + 0x68) = 0;
          }
        }
      }
      sub_61D9B0(a1, a2, *(char ***)(a1 + 0x90));
    }
  }
}
