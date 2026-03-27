void __cdecl sub_552C10(int *a1, int a2, int a3)
{
  int *v3; // edi
  char *v4; // ebx
  int v5; // ebp
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // [esp+18h] [ebp-2Ch]
  char *v11; // [esp+1Ch] [ebp-28h]
  _DWORD v12[3]; // [esp+20h] [ebp-24h] BYREF
  unsigned int v13; // [esp+2Ch] [ebp-18h]
  int v14; // [esp+30h] [ebp-14h]
  int v15; // [esp+34h] [ebp-10h]
  unsigned int v16; // [esp+40h] [ebp-4h]
  int v17; // [esp+48h] [ebp+4h]

  v3 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        v4 = (char *)a1 - a3;
        v11 = (char *)a1 - a3;
        v5 = a2 - (_DWORD)a1;
        v6 = (_DWORD *)(a3 + 4);
        v10 = 2;
        do
        {
          v17 = 2;
          do
          {
            v7 = *v3;
            if ( *v3 && (v8 = *(_DWORD *)((char *)v6 + (_DWORD)v4)) != 0 )
            {
              v6[0xFFFFFFFF] = v7;
              *v6 = v8;
              sub_527160(v6 + 1, v8 * v7, COERCE_INT(0.0));
              v9 = sub_552630((int *)((char *)v3 + v5), v12, v3);
              v16 = 0;
              sub_5520E0(v6 + 0xFFFFFFFF, (int)(v6 + 0xFFFFFFFF), v9);
              v16 = 0xFFFFFFFF;
              if ( v13 )
                FormHeapFree(v13);
              v13 = 0;
              v14 = 0;
              v15 = 0;
              v4 = v11;
            }
            else
            {
              v6[0xFFFFFFFF] = 0;
              *v6 = 0;
              sub_527160(v6 + 1, 0, COERCE_INT(0.0));
            }
            v3 += 6;
            v6 += 6;
            --v17;
          }
          while ( v17 );
          --v10;
        }
        while ( v10 );
      }
    }
  }
}
