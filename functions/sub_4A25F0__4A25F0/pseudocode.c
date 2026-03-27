void __thiscall sub_4A25F0(_DWORD *this)
{
  _DWORD *v1; // edi
  DWORD CurrentThreadId; // eax
  _DWORD *v3; // ecx
  unsigned int v4; // esi
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // edx
  unsigned int *v8; // eax
  _DWORD *v9; // ecx
  int v10; // edi
  char *v11; // ebx
  char *v12; // eax
  int v13; // esi
  char *v14; // eax
  char v16; // dl
  int v17; // eax
  void (__thiscall ***v18)(_DWORD, int); // esi
  size_t v20; // [esp-4h] [ebp-250h]
  int v22; // [esp+14h] [ebp-238h] BYREF
  unsigned int v23; // [esp+18h] [ebp-234h] BYREF
  char *Str; // [esp+1Ch] [ebp-230h] BYREF
  unsigned int *v25; // [esp+20h] [ebp-22Ch] BYREF
  int v26[2]; // [esp+24h] [ebp-228h] BYREF
  int v27; // [esp+2Ch] [ebp-220h] BYREF
  char v28; // [esp+33h] [ebp-219h] BYREF
  char Dest[516]; // [esp+34h] [ebp-218h] BYREF
  unsigned int v30; // [esp+248h] [ebp-4h]

  v1 = this;
  nullsub_returnTrue_0arg();
  EnterCriticalSection(&CriticalSection);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B353FC;
  dword_B353F8 = CurrentThreadId;
  sub_4A23B0(v1);
  v3 = (_DWORD *)v1[3];
  if ( v3[3] )
  {
    v4 = v3[1];
    v5 = 0;
    if ( v4 )
    {
      v6 = (_DWORD *)v3[2];
      v7 = v6;
      while ( !*v7 )
      {
        ++v5;
        ++v7;
        if ( v5 >= v4 )
          goto LABEL_6;
      }
      v8 = (unsigned int *)v6[v5];
    }
    else
    {
LABEL_6:
      v8 = 0;
    }
    v25 = v8;
    if ( v8 )
    {
      while ( 1 )
      {
        Str = 0;
        v23 = 0;
        v9 = (_DWORD *)v1[3];
        v30 = 0;
        sub_7B2600(v9, &v25, &Str, &v23);
        if ( *(_DWORD *)(v23 + 4) == 2 )
        {
          v10 = 0;
          v22 = 0;
          v11 = Str;
          LOBYTE(v30) = 1;
          v12 = strrchr(Str, 0x5F);
          v13 = v12 - v11;
          if ( v12 - v11 <= 0 )
            goto LABEL_20;
          LODWORD(v20) = v12 - v11;
          strncpy(Dest, v11, v20);
          Dest[v13] = 0;
          v14 = &v28;
          while ( *++v14 )
            ;
          v16 = byte_A3D35C;
          *(_DWORD *)v14 = dword_A3D358;
          v14[4] = v16;
          HashFilePAth(Dest, (int)&v27, (int)v26);
          v17 = ArchiveManager_LazyFileLookup(1, (unsigned int *)&v27, (unsigned int *)v26, (unsigned int)Dest);
          if ( v17 )
            sub_4A1AB0((_DWORD *)*(this + 2), v17, &v22);
          else
            sub_4A1AB0((_DWORD *)*(this + 3), (int)Dest, &v22);
          v10 = v22;
          if ( !v22 || *(_DWORD *)(v22 + 4) == 2 )
LABEL_20:
            sub_4A1A10((_DWORD **)this, v11);
          LOBYTE(v30) = 0;
          if ( v10 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
              (**(void (__thiscall ***)(int, int))v10)(v10, 1);
          }
        }
        v18 = (void (__thiscall ***)(_DWORD, int))v23;
        v30 = 0xFFFFFFFF;
        if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) )
          (**v18)(v18, 1);
        if ( !v25 )
          break;
        v1 = this;
      }
    }
  }
  if ( dword_B353FC-- == 1 )
    dword_B353F8 = 0;
  LeaveCriticalSection(&CriticalSection);
  nullsub_returnTrue_0arg();
}
