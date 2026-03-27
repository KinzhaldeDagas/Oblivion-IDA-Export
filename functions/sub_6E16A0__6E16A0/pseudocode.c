void __thiscall sub_6E16A0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // eax
  int v6; // ebp
  char *v7; // edi
  NiSequence *v8; // eax
  NiSequence *v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // ebx
  char *v14; // edi
  int v15; // eax
  int v16; // edi
  int v17; // eax
  void (__stdcall *v18)(volatile LONG *); // ebx
  _DWORD *v19; // ebp
  int v20; // edi
  int v21; // eax
  int v22; // esi
  unsigned int v23; // [esp-10h] [ebp-40h]
  unsigned int v24; // [esp-Ch] [ebp-3Ch]
  unsigned int v25; // [esp-8h] [ebp-38h]
  unsigned int v26; // [esp-4h] [ebp-34h] BYREF
  int v27; // [esp+0h] [ebp-30h]
  int v28; // [esp+14h] [ebp-1Ch]
  _DWORD *v29; // [esp+18h] [ebp-18h]
  unsigned int v30; // [esp+1Ch] [ebp-14h]
  unsigned int *v31; // [esp+20h] [ebp-10h]
  unsigned int v32; // [esp+2Ch] [ebp-4h]

  v3 = a2;
  sub_715E70(this, a2);
  if ( a2[0x36] >= 0x4010003u )
  {
    v17 = sub_7124D0(a2);
    if ( v17 )
    {
      v18 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
      v19 = this + 0xF;
      v20 = v17;
      do
      {
        v21 = sub_7124A0(a2);
        v22 = *(_DWORD *)(v21 + 8);
        v26 = v21;
        v31 = &v26;
        v18((volatile LONG *)(v21 + 4));
        sub_7C2FF0((int)v19, v22, v26, v27);
        --v20;
      }
      while ( v20 );
    }
  }
  else
  {
    v4 = (_DWORD *)dword_B3E040;
    v5 = *(unsigned __int16 *)(dword_B3E040 + 0x2A);
    v6 = 0;
    v30 = v5;
    v28 = 0;
    if ( v5 )
    {
      v29 = this + 0xF;
      while ( 1 )
      {
        v7 = *(char **)(v4[5] + 4 * v6);
        v8 = (NiSequence *)FormHeapAlloc(0x34u);
        v31 = (unsigned int *)v8;
        v9 = 0;
        v32 = 0;
        if ( v8 )
          v9 = NiSequence::NiSequence(v8, v7, 0xCu, 0xC);
        v32 = 0xFFFFFFFF;
        FormHeapFree((unsigned int)v7);
        *((_DWORD *)v9 + 0xC) = *(_DWORD *)(*(_DWORD *)(dword_B3E040 + 4) + 4 * v6);
        v10 = sub_7124A0(v3);
        v11 = *((_DWORD *)v9 + 0xB);
        v12 = v10;
        if ( v11 != v10 )
        {
          if ( v11 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
              (**(void (__thiscall ***)(int, int))v11)(v11, 1);
          }
          *((_DWORD *)v9 + 0xB) = v12;
          if ( v12 )
            InterlockedIncrement((volatile LONG *)(v12 + 4));
        }
        v13 = *(_DWORD *)(*(_DWORD *)(dword_B3E040 + 0x24) + 4 * v6);
        while ( v13 )
        {
          v14 = *(char **)(*(_DWORD *)(dword_B3E040 + 0x34) + 4 * v28);
          --v13;
          ++v28;
          v15 = sub_7124A0(a2);
          sub_6D83A0((unsigned __int16 *)v9, v14, v15);
          FormHeapFree((unsigned int)v14);
        }
        v16 = *((_DWORD *)v9 + 2);
        v26 = (unsigned int)v9;
        v31 = &v26;
        InterlockedIncrement((volatile LONG *)v9 + 1);
        sub_7C2FF0((int)v29, v16, v26, v27);
        v4 = (_DWORD *)dword_B3E040;
        if ( ++v6 >= v30 )
          break;
        v3 = a2;
      }
    }
    if ( v4 )
    {
      v26 = v4[0xD];
      v4[0xC] = &NiTArray<char *>::`vftable';
      FormHeapFree(v26);
      v25 = v4[9];
      v4[8] = &NiTArray<unsigned int>::`vftable';
      FormHeapFree(v25);
      v24 = v4[5];
      v4[4] = &NiTArray<char *>::`vftable';
      FormHeapFree(v24);
      v23 = v4[1];
      *v4 = &NiTArray<unsigned int>::`vftable';
      FormHeapFree(v23);
      FormHeapFree((unsigned int)v4);
    }
    dword_B3E040 = 0;
  }
}
