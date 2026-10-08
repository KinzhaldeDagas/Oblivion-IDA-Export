int __thiscall sub_54F890(char *this, int a2)
{
  unsigned int v3; // edi
  int v4; // ebx
  DWORD CurrentThreadId; // eax
  char *v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // eax
  _DWORD *v9; // edx
  unsigned int *v10; // eax
  int v11; // ebp
  signed int v12; // eax
  unsigned int v15; // [esp+14h] [ebp-14h] BYREF
  unsigned int *v16; // [esp+18h] [ebp-10h] BYREF
  unsigned int v17; // [esp+24h] [ebp-4h]

  v3 = 0; /*0x54f8b9*/
  v4 = 0; /*0x54f8bb*/
  v15 = 0; /*0x54f8bd*/
  v17 = 0; /*0x54f8c6*/
  EnterCriticalSection(&unk_B39C00); /*0x54f8ca*/
  CurrentThreadId = GetCurrentThreadId(); /*0x54f8d0*/
  ++unk_B39C7C; /*0x54f8d6*/
  v6 = this + 4; /*0x54f8dd*/
  unk_B39C78 = CurrentThreadId; /*0x54f8e0*/
  v7 = *((_DWORD *)v6 + 1); /*0x54f8e5*/
  v8 = 0; /*0x54f8e8*/
  if ( v7 ) /*0x54f8ec*/
  {
    v9 = *((_DWORD **)v6 + 2); /*0x54f8f1*/
    while ( !*v9 ) /*0x54f8f6*/
    {
      ++v8; /*0x54f8f8*/
      ++v9; /*0x54f8fb*/
      if ( v8 >= v7 ) /*0x54f900*/
        goto LABEL_5; /*0x54f900*/
    }
    v10 = *(unsigned int **)(*((_DWORD *)v6 + 2) + 4 * v8); /*0x54f940*/
  }
  else
  {
LABEL_5:
    v10 = 0; /*0x54f902*/
  }
  v16 = v10; /*0x54f906*/
  if ( v10 ) /*0x54f90a*/
  {
    v11 = a2; /*0x54f90c*/
    while ( 1 ) /*0x54f921*/
    {
      sub_7B2600((unsigned int **)v6, &v16, &a2, &v15); /*0x54f921*/
      v3 = v15; /*0x54f926*/
      if ( !v11 ) /*0x54f92f*/
        break; /*0x54f92f*/
      if ( v11 == 1 ) /*0x54f934*/
      {
        v12 = sub_556650(*(_DWORD **)(v15 + 8)); /*0x54f939*/
LABEL_13:
        v4 += v12; /*0x54f94e*/
      }
      if ( !v16 ) /*0x54f955*/
        goto LABEL_15; /*0x54f955*/
    }
    v12 = sub_5564E0(*(_DWORD **)(v15 + 8)); /*0x54f949*/
    goto LABEL_13; /*0x54f949*/
  }
LABEL_15:
  if ( unk_B39C7C-- == 1 ) /*0x54f957*/
    unk_B39C78 = 0; /*0x54f960*/
  LeaveCriticalSection(&unk_B39C00); /*0x54f96f*/
  v17 = 0xFFFFFFFF; /*0x54f977*/
  if ( v3 ) /*0x54f97f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x54f985*/
      (**(void (__thiscall ***)(unsigned int, int))v3)(v3, 1); /*0x54f997*/
  }
  return v4; /*0x54f99b*/
}
