// positive sp value has been detected, the output may be wrong!
char __userpurge MagicTarget_AttemptAddEffect@<al>(int *this@<ecx>, double a2@<st0>, int a3, float a4, int a5, int a6)
{
  int v6; // eax
  char v8; // al
  int v9; // edx
  int v11; // [esp-20h] [ebp-30h]
  int v12; // [esp-1Ch] [ebp-2Ch]
  float v13; // [esp-18h] [ebp-28h]
  int v14; // [esp-14h] [ebp-24h]
  int v15; // [esp-10h] [ebp-20h]
  int v16; // [esp-Ch] [ebp-1Ch]
  int v17; // [esp-8h] [ebp-18h]
  int v18; // [esp-4h] [ebp-14h]

  v6 = *(_DWORD *)(v16 + 0xC); /*0x6a2d00*/
  if ( !*(_DWORD *)(v6 + 0x10) /*0x6a2d2e*/
    || *(_DWORD *)(*(_DWORD *)(v6 + 0x1C) + 0x98) == 0x46464553
    && (*(unsigned __int8 (**)(void))(*(_DWORD *)v15 + 0x1C))()
    || (*(unsigned __int8 (**)(void))(*(_DWORD *)v15 + 0x20))() )
  {
    return MagicTarget_AddEffect((int)this, a2, v14, v15, v16, v11, v12, v13, v14, v15, v16, v17, v18); /*0x6a2d2e*/
  }
  v8 = (*(int (__thiscall **)(int *))(*this + 0x28))(this); /*0x6a2d3e*/
  v9 = *this; /*0x6a2d42*/
  if ( v8 ) /*0x6a2d46*/
  {
    (*(void (__thiscall **)(int *))(v9 + 0x18))(this); /*0x6a2d4d*/
    return 0; /*0x6a2d55*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(v9 + 0x24))(this) ) /*0x6a2d60*/
    return MagicTarget_AddEffect((int)this, a2, v14, v15, v16, v11, v12, v13, v14, v15, v16, v17, v18); /*0x6a2d7f*/
  (*(void (__thiscall **)(int *))(*this + 0x1C))(this); /*0x6a2d6f*/
  return 0; /*0x6a2d4f*/
}
