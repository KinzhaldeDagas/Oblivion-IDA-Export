void __userpurge sub_4430F0(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        unsigned int i@<ebp>,
        double a5@<st0>,
        int a6)
{
  unsigned int v6; // edx
  unsigned int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // esi
  bool v11; // zf
  TESWorldSpace *v12; // ecx
  int v13; // esi
  int v14; // edi
  TESForm *v15; // eax
  int v16; // ecx
  TESForm *j; // eax
  unsigned int v18; // [esp+10h] [ebp-10h]
  int v19; // [esp+14h] [ebp-Ch]
  unsigned int v20; // [esp+18h] [ebp-8h]
  unsigned int v21; // [esp+1Ch] [ebp-4h]

  v6 = uGridsToLoad;
  v8 = (unsigned int)uGridsToLoad >> 1;
  v9 = 0;
  v10 = *(this + 9) - v8;
  v19 = 0;
  v20 = *(this + 8) - v8;
  v21 = v10;
LABEL_2:
  v18 = v9;
  if ( v9 < v6 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= v6 )
      {
        ++v9;
        goto LABEL_2;
      }
      if ( !a6 )
        break;
      if ( a6 == 1 )
      {
        v11 = GetGridEntry((GridCellArray *)*(this + 2), v9, i) == 0;
        goto LABEL_9;
      }
LABEL_10:
      v12 = (TESWorldSpace *)*(this + 0x1D);
      if ( v12 )
      {
        v13 = i + v10;
        v14 = v20 + v9;
        v15 = sub_4F1630(v12, st5_0, a3, a5, v14, v13);
        if ( (v15 || (v15 = sub_447740((_DWORD *)TESDataHandler, v14, v13, (int **)*(this + 0x1D), 1)) != 0)
          && BYTE2(v15[1].member.refID) != 3 )
        {
          v16 = 0;
          for ( j = v15 + 3; j; j = *(TESForm **)&j->member.type )
          {
            if ( j->vtbl )
              ++v16;
          }
          v19 += v16;
        }
        v9 = v18;
      }
LABEL_20:
      v10 = v21;
      v6 = uGridsToLoad;
    }
    v11 = !sub_4821B0((_DWORD *)*(this + 2), v9, i);
LABEL_9:
    if ( !v11 )
      goto LABEL_20;
    goto LABEL_10;
  }
  if ( v19 )
    sub_440AF0((int)this, st5_0, a3, i, 1, 0, 0);
}
