void __thiscall sub_608CB0(ArrowProjectile *this)
{
  NiNode *v2; // eax
  int v3; // ebx
  float *v4; // eax
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // edx
  float v13; // [esp+18h] [ebp-34h]
  float v14[9]; // [esp+28h] [ebp-24h] BYREF

  v2 = this->super.vtbl->super.GetNiNode(this);
  v3 = (int)v2;
  if ( v2 )
  {
    v13 = fabs(1.0);
    v2->members.super.m_localTransform.scale = v13;
    v4 = this->super.vtbl->super.GetPos(this);
    *(float *)(v3 + 0x54) = *v4;
    *(float *)(v3 + 0x58) = v4[1];
    *(float *)(v3 + 0x5C) = v4[2];
    sub_7117C0(v14, this->super.super.rot.z, this->super.super.rot.x, this->super.super.rot.y);
    qmemcpy((void *)(v3 + 0x30), v14, 0x24u);
    v5 = sub_480340(v3);
    if ( v5 )
    {
      v6 = *(_DWORD **)(v5 + 0x10);
      if ( v6 && (v7 = v6[2]) != 0 && (v8 = v7 + 0x14) != 0 )
        v9 = *(_DWORD *)(v8 + 0x1C);
      else
        v9 = 0;
      v10 = v9 | 0x4000;
      if ( v6 )
      {
        v11 = v6[2];
        if ( v11 )
        {
          v12 = v11 + 0x14;
          if ( v12 )
            *(_DWORD *)(v12 + 0x1C) = v10;
        }
      }
      (*(void (__thiscall **)(_DWORD *))(*v6 + 0x80))(v6);
    }
    sub_481570((NiNode *)v3);
  }
}
