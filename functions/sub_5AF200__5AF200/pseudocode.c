void __thiscall sub_5AF200(int this)
{
  int v3; // eax
  int v4; // eax
  int SkillMasteryLevel; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ebp
  int v9; // esi
  int *v10; // ecx
  double v11; // st7
  int v12; // [esp+0h] [ebp-Ch]
  int v13; // [esp+4h] [ebp-8h]
  int v14; // [esp+8h] [ebp-4h]

  v3 = *(_DWORD *)(this + 0x160);
  *(float *)(this + 0x158) = 0.0;
  *(float *)(this + 0x14C) = 0.0;
  v4 = this + 0x28 * v3;
  *(_DWORD *)(this + 0x150) = 4;
  if ( !*(_BYTE *)(v4 + 0x95) )
    *(float *)(v4 + 0x90) = -*(float *)(this + 0x6C);
  SkillMasteryLevel = Actor_GetSkillMasteryLevel(0x1E);
  if ( SkillMasteryLevel )
  {
    switch ( SkillMasteryLevel )
    {
      case 1:
        v6 = 1;
        break;
      case 2:
        v6 = 2;
        break;
      case 3:
        v6 = 3;
        break;
      default:
        v6 = SkillMasteryLevel != 4 ? 0 : 4;
        break;
    }
  }
  else
  {
    v6 = 0;
  }
  TESObjectREF_GetItemCount((TESObjectREFR *)TESDataHandler_g_PlayerRef, TESDataHandler_g_SkeletonKey, v12, v13, v14);
  if ( v7 )
    ++v6;
  v8 = 0;
  if ( *(int *)(this + 0x4C) > 0 )
  {
    v9 = this + 0x95;
    do
    {
      if ( *(_BYTE *)v9 )
      {
        if ( v6 > 0 )
        {
          --v6;
        }
        else
        {
          v10 = *(int **)(v9 + 0xB);
          *(_BYTE *)v9 = 0;
          *(_BYTE *)(v9 - 1) = 1;
          *(_BYTE *)(v9 + 1) = 1;
          v11 = -*(float *)(this + 0x6C);
          *(_DWORD *)(v9 - 0x15) = 0xFFFFFFFF;
          *(float *)(v9 - 5) = v11;
          if ( v10 )
          {
            if ( !sub_6B7260(v10) )
              sub_6B7190(*(int **)(v9 + 0xB), 1);
          }
        }
      }
      ++v8;
      v9 += 0x28;
    }
    while ( v8 < *(_DWORD *)(this + 0x4C) );
  }
}
