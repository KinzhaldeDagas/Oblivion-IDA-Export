void __thiscall sub_720B40(NiSourceTexture *this, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8)
{
  const char *v8; // ebp
  unsigned int v9; // kr00_4
  char *v10; // ebx
  void *v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // ebp
  int v15; // [esp+14h] [ebp-154h]
  char *v16; // [esp+18h] [ebp-150h]
  NiDevImageConverter *v17; // [esp+1Ch] [ebp-14Ch]
  int a1[6]; // [esp+24h] [ebp-144h] BYREF
  char *Src[6]; // [esp+3Ch] [ebp-12Ch]
  _BYTE v21[260]; // [esp+54h] [ebp-114h] BYREF
  unsigned int v22; // [esp+164h] [ebp-4h]

  ArrayConstructor(
    a1,
    4u,
    6,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  v22 = 0;
  Src[0] = a2;
  Src[1] = a3;
  Src[2] = a4;
  Src[3] = a5;
  Src[4] = a6;
  Src[5] = a7;
  v17 = sub_71B280();
  v15 = 0;
  while ( 1 )
  {
    v8 = Src[v15];
    v9 = strlen(v8);
    v10 = (char *)FormHeapAlloc(v9 + 1);
    strcpy_s(v10, v9 + 1, v8);
    TESTexture::ClearComponentReferences(v11);
    v16 = sub_71B090(v10);
    sub_7478F0(a8, v16);
    (*(void (__thiscall **)(char *))(*(_DWORD *)a8 + 4))(a8);
    if ( (*(unsigned __int8 (__thiscall **)(char *, _BYTE *, int))(*(_DWORD *)a8 + 8))(a8, v21, 0x104) )
    {
      while ( !(unsigned __int8)NiFile_CanOpenFileWithMode_Indirect(v21, 0) )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(char *, _BYTE *, int))(*(_DWORD *)a8 + 8))(a8, v21, 0x104) )
          goto LABEL_13;
      }
      v12 = (*(int (__thiscall **)(NiDevImageConverter *, _BYTE *, _DWORD))(*(_DWORD *)v17 + 8))(v17, v21, 0);
      v13 = a1[v15];
      v14 = v12;
      if ( v13 != v12 )
      {
        if ( v13 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
            (**(void (__thiscall ***)(int, int))v13)(v13, 1);
        }
        a1[v15] = v14;
        if ( v14 )
          InterlockedIncrement((volatile LONG *)(v14 + 4));
      }
      FormHeapFree((unsigned int)v16);
      FormHeapFree((unsigned int)v10);
    }
LABEL_13:
    if ( !a1[v15] )
      break;
    if ( (unsigned int)++v15 >= 6 )
    {
      sub_7205A0(this, a1[0], a1[1], a1[2], a1[3], a1[4], a1[5]);
      break;
    }
  }
  v22 = 0xFFFFFFFF;
  _LN21(a1, 4u, 6, (void (__thiscall *)(void *))sub_7016A0);
}
