void __userpurge sub_6AE720(int this@<ecx>, double a2@<st0>, _DWORD *a3)
{
  char v6; // bl
  double v8; // st5
  _DWORD *v9; // edi
  int *v10; // ecx
  unsigned int v11; // edi
  int *v12; // eax
  float v13; // [esp+10h] [ebp-Ch]
  NiTMap_Entry_TESCELL *v14; // [esp+14h] [ebp-8h] BYREF
  float v15; // [esp+18h] [ebp-4h] BYREF

  v6 = (char)a3;
  if ( (unsigned __int8)a3 != *(_BYTE *)(this + 0xA5) )
  {
    *(_BYTE *)(this + 0xA5) = (_BYTE)a3;
    v8 = flt_B161B8;
    a3 = 0;
    if ( v6 )
      v8 = -v8;
    v13 = v8;
    if ( bSoundEnabled_Audio )
    {
      v14 = (NiTMap_Entry_TESCELL *)sub_6A9030(*(unsigned int **)(this + 0x300));
      while ( v14 )
      {
        sub_452600(*(NiTMap_TESCELL **)(this + 0x300), &v14, (void **)&v15, (TESObjectCELL **)&a3);
        v9 = a3;
        if ( (*a3 & 0x1000) != 0 )
          sub_6B6AC0(a3);
        if ( (*(_BYTE *)v9 & 0x20) == 0 )
        {
          if ( sub_6B6AF0((int)v9) )
          {
            sub_6B6B90(v9);
            v15 = a2 + v13;
            a2 = v15;
            sub_6B6B20((int)v9, v15);
          }
        }
      }
    }
    v10 = *(int **)(this + 0x324);
    if ( v10 )
    {
      if ( !v6 )
      {
        sub_6B7240(v10);
        sub_6B73C0(*(int **)(this + 0x324));
        v11 = *(_DWORD *)(this + 0x324);
        if ( v11 )
        {
          sub_6B73E0(*(_DWORD **)(this + 0x324));
          FormHeapFree(v11);
        }
        *(_DWORD *)(this + 0x324) = 0;
        return;
      }
    }
    else if ( !v6 )
    {
      return;
    }
    if ( !v10 )
    {
      v12 = PlaySound___((int *)this, "AMBUnderwaterLP", 0x11, 1);
      *(_DWORD *)(this + 0x324) = v12;
      if ( v12 )
        sub_6B7190(v12, 1);
    }
  }
}
