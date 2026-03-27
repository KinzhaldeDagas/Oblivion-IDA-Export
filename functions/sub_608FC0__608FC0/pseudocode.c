char __thiscall sub_608FC0(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  float *v5; // ebp
  double v7; // st7
  int v8; // eax
  int v9; // edx
  _DWORD *ShadowSceneNode; // esi
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  char v15; // al
  int v16; // eax
  int v17; // ecx
  float v18; // [esp+8h] [ebp-8h]
  float v19; // [esp+8h] [ebp-8h]

  v3 = (*(int (__fastcall **)(_DWORD *))(*this + 0x154))(this);
  (*(void (__thiscall **)(_DWORD *))(*this + 0x1C8))(this);
  v4 = *(this + 0x17);
  if ( *(_DWORD *)(v4 + 0x28)
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 0x28) + 0x190))(*(_DWORD *)(v4 + 0x28)) )
  {
    v5 = *(float **)(*(this + 0x17) + 0x2C);
    if ( v5 )
    {
      sub_88CD50((_WORD *)v3, 1, 0);
      sub_536740(v3);
      v7 = *(float *)(v3 + 0x60);
      v8 = *(this + 0x17);
      v9 = *(_DWORD *)(v8 + 4);
      v8 += 4;
      *(_DWORD *)(v3 + 0x54) = v9;
      *(_DWORD *)(v3 + 0x58) = *(_DWORD *)(v8 + 4);
      *(_DWORD *)(v3 + 0x5C) = *(_DWORD *)(v8 + 8);
      qmemcpy((void *)(v3 + 0x30), (const void *)(*(this + 0x17) + 0x30), 0x24u);
      v18 = v7 / v5[0x25];
      v19 = fabs(v18);
      *(float *)(v3 + 0x60) = v19;
      ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
      sub_7C5E70(ShadowSceneNode, v3);
      (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)v5 + 0x84))(v5, v3, 1);
      sub_7C5D00(ShadowSceneNode, (_BYTE *)v3);
      v11 = 0;
      while ( v11 < *(unsigned __int16 *)(v3 + 0x14) )
      {
        v12 = *(_DWORD *)(v3 + 0x10);
        v13 = *(_DWORD *)(v12 + 4 * (unsigned __int16)v11);
        if ( !v13 )
          goto LABEL_14;
        v14 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v13 + 4))(*(_DWORD *)(v12 + 4 * (unsigned __int16)v11));
        if ( v14 )
        {
          while ( (char *)v14 != dword_B35ACC )
          {
            v14 = *(_DWORD *)(v14 + 4);
            if ( !v14 )
              goto LABEL_10;
          }
          v15 = 1;
        }
        else
        {
LABEL_10:
          v15 = 0;
        }
        if ( (v15 != 0 ? v13 : 0) != 0 )
          sub_6FFBE0((_WORD *)v3, v11);
        else
LABEL_14:
          ++v11;
      }
      v16 = *(_DWORD *)(*(this + 0x17) + 0x28);
      if ( v16 )
      {
        v17 = *(_DWORD *)(v16 + 0x58);
        if ( v17 )
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v17 + 0x4F8))(v17, this);
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    PrintError("An arrow thinks it is colliding with an Actor, but there is no Actor in the collision data!");
    return 0;
  }
}
