int __thiscall ActvEffListEntry_CompareName(void *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int *v5; // ecx
  int v6; // edi
  char **Name; // edi
  int *v8; // ecx
  char **v9; // eax
  int v11; // esi
  int v12; // [esp-4h] [ebp-34h]
  int v13; // [esp+0h] [ebp-30h]
  int v14; // [esp+0h] [ebp-30h]
  int v15; // [esp+4h] [ebp-2Ch]
  int v16; // [esp+4h] [ebp-2Ch]
  int v17; // [esp+8h] [ebp-28h]
  int v18; // [esp+8h] [ebp-28h]
  int v19; // [esp+Ch] [ebp-24h]
  int v20; // [esp+Ch] [ebp-24h]
  unsigned int v21; // [esp+Ch] [ebp-24h]
  int v22; // [esp+10h] [ebp-20h] BYREF
  unsigned int v23; // [esp+14h] [ebp-1Ch]
  int v24; // [esp+18h] [ebp-18h]
  int v25[5]; // [esp+1Ch] [ebp-14h] BYREF

  v3 = *(_DWORD *)(*(_DWORD *)this + 0xC);
  v4 = *(_DWORD *)(v3 + 0x1C);
  v5 = *(int **)(a2 + 0xC);
  v6 = v5[7];
  if ( *(_DWORD *)(v4 + 0x98) == 0x46464553 && *(_DWORD *)(v6 + 0x98) == 0x46464553 )
  {
    Name = (char **)EffectItem_GetName(v5, (int)v25, v13, v15, v17, v19, v22, v23, v24, v25[0], v25[1]);
    v8 = *(int **)(*(_DWORD *)this + 0xC);
    v25[3] = 0;
    v9 = (char **)EffectItem_GetName(v8, (int)&v22, v12, v14, v16, v18, v20, v22, v23, v24, v25[0]);
    _strcmp(*v9, *Name);
    FormHeapFree(v21);
    v22 = 0;
    FormHeapFree(v23);
    return ActvEffListEntry_CompareName_::Done(a2);
  }
  else
  {
    if ( v4 != v6 )
      return ActvEffListEntry_CompareName_::Return_0(a2);
    if ( ((v11 = *(_DWORD *)(v4 + 0x58), (v11 & 0x80000) != 0) || (v11 & 0x100000) != 0)
      && *(_DWORD *)(v3 + 0x14) != v5[5] )
    {
      return ActvEffListEntry_CompareName_::Return_0(a2);
    }
    else
    {
      return ActvEffListEntry_CompareName_::Return_1(a2);
    }
  }
}
