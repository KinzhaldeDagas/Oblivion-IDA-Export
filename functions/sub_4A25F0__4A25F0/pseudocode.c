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
  unsigned int **v9; // ecx
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

  v1 = this; /*0x4a2630*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4a2638*/
  EnterCriticalSection(&MEMORY[0xB35380]); /*0x4a2645*/
  CurrentThreadId = GetCurrentThreadId(); /*0x4a264b*/
  ++unk_B353FC; /*0x4a2651*/
  unk_B353F8 = CurrentThreadId; /*0x4a265a*/
  sub_4A23B0(v1); /*0x4a265f*/
  v3 = (_DWORD *)v1[3]; /*0x4a2664*/
  if ( v3[3] ) /*0x4a2669*/
  {
    v4 = v3[1]; /*0x4a2672*/
    v5 = 0; /*0x4a2675*/
    if ( v4 ) /*0x4a2679*/
    {
      v6 = (_DWORD *)v3[2]; /*0x4a267b*/
      v7 = v6; /*0x4a267e*/
      while ( !*v7 ) /*0x4a2682*/
      {
        ++v5; /*0x4a2684*/
        ++v7; /*0x4a2687*/
        if ( v5 >= v4 ) /*0x4a268c*/
          goto LABEL_6; /*0x4a268c*/
      }
      v8 = (unsigned int *)v6[v5]; /*0x4a269e*/
    }
    else
    {
LABEL_6:
      v8 = 0; /*0x4a268e*/
    }
    v25 = v8; /*0x4a2692*/
    if ( v8 ) /*0x4a2696*/
    {
      while ( 1 ) /*0x4a26a7*/
      {
        Str = 0; /*0x4a26a7*/
        v23 = 0; /*0x4a26ab*/
        v9 = (unsigned int **)v1[3]; /*0x4a26b9*/
        v30 = 0; /*0x4a26c1*/
        sub_7B2600(v9, &v25, &Str, &v23); /*0x4a26c8*/
        if ( *(_DWORD *)(v23 + 4) == 2 ) /*0x4a26d7*/
        {
          v10 = 0; /*0x4a26dd*/
          v22 = 0; /*0x4a26df*/
          v11 = Str; /*0x4a26e3*/
          LOBYTE(v30) = 1; /*0x4a26ea*/
          v12 = strrchr(Str, 0x5F);             // ModernWindowsCompatible decode: _strrchr(Str, '_') for BSTexturePalette path entry processing. /*0x4a26f2*/
          v13 = v12 - v11;                      // ModernWindowsCompatible patch site: vanilla subtracts Str from _strrchr return before checking for NULL; guarded by plugin after byte validation. /*0x4a26f9*/
          if ( v12 - v11 <= 0 ) /*0x4a2700*/
            goto LABEL_20; /*0x4a2700*/
          LODWORD(v20) = v12 - v11; /*0x4a2706*/
          strncpy(Dest, v11, v20); /*0x4a270d*/
          Dest[v13] = 0; /*0x4a2719*/
          v14 = &v28; /*0x4a271e*/
          while ( *++v14 ) /*0x4a2729*/
            ; /*0x4a2721*/
          v16 = byte_A3D35C; /*0x4a2731*/
          *(_DWORD *)v14 = dword_A3D358; /*0x4a2737*/
          v14[4] = v16; /*0x4a2739*/
          HashFilePAth(Dest, (int)&v27, (int)v26); /*0x4a274b*/
          v17 = ArchiveManager_LazyFileLookup(1, (unsigned int *)&v27, (unsigned int *)v26, (unsigned int)Dest); /*0x4a2761*/
          if ( v17 ) /*0x4a276f*/
            sub_4A1AB0((_DWORD *)*(this + 2), v17, &v22); /*0x4a277a*/
          else
            sub_4A1AB0((_DWORD *)*(this + 3), (int)Dest, &v22); /*0x4a278e*/
          v10 = v22; /*0x4a2793*/
          if ( !v22 || *(_DWORD *)(v22 + 4) == 2 ) /*0x4a279f*/
LABEL_20:
            sub_4A1A10((_DWORD **)this, v11);   // ModernWindowsCompatible null-result target: existing vanilla fallback/removal path used when underscore position is not positive. /*0x4a27a6*/
          LOBYTE(v30) = 0; /*0x4a27ad*/
          if ( v10 ) /*0x4a27b5*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x4a27bb*/
              (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x4a27cd*/
          }
        }
        v18 = (void (__thiscall ***)(_DWORD, int))v23; /*0x4a27cf*/
        v30 = 0xFFFFFFFF; /*0x4a27d7*/
        if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x4a27e2*/
          (**v18)(v18, 1); /*0x4a27f4*/
        if ( !v25 ) /*0x4a27fc*/
          break; /*0x4a27fc*/
        v1 = this; /*0x4a26a3*/
      }
    }
  }
  if ( unk_B353FC-- == 1 ) /*0x4a2802*/
    unk_B353F8 = 0; /*0x4a280b*/
  LeaveCriticalSection(&MEMORY[0xB35380]); /*0x4a2816*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4a281e*/
}
