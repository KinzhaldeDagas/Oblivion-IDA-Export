void __thiscall sub_7AC9A0(int **this, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  BSShader *shader; // ebp
  int **v5; // ebx
  BSShader *v6; // esi
  NiD3DShaderConstantMap *PixelConstantMap; // ecx
  int *v8; // eax
  int *v9; // esi
  _DWORD *v10; // eax
  bool v11; // zf
  void *v12; // ecx
  int *v13; // ebp
  _DWORD *v14; // eax
  int **v15; // esi
  BSShader *v17; // [esp+14h] [ebp-8h]
  BSShader *v18; // [esp+18h] [ebp-4h]
  _DWORD *v19; // [esp+24h] [ebp+8h]

  v3 = a2;
  if ( byte_B42CE8 )
  {
    if ( a2 == 0x49 )
    {
      v3 = 0x48;
    }
    else if ( a2 == 0x16F )
    {
      v3 = 0x16E;
    }
  }
  shader = GetShaderDefinition(1u)->shader;
  v5 = this + 5 * (unsigned __int16)a2;
  if ( !v5[0x45] )
    return;
  v6 = *(BSShader **)(*(_DWORD *)v5[0x42][2] + 0xBC);
  v17 = 0;
  v18 = 0;
  if ( v6 )
  {
    if ( ((int (__thiscall *)(BSShader *))v6->__vftable->super.super.super.No1C)(v6) < 1
      || ((int (__thiscall *)(BSShader *))v6->__vftable->super.super.super.No1C)(v6) > 5 )
    {
      if ( ((int (__thiscall *)(BSShader *))v6->__vftable->super.super.super.No1C)(v6) == 0x1B )
      {
        v18 = v6;
        sub_7FD260(v3);
        v6->member.super.VertexConstantMap->_vtbl->sub_9A97B0(v6->member.super.VertexConstantMap);
        PixelConstantMap = v6->member.super.PixelConstantMap;
        goto LABEL_14;
      }
    }
    else
    {
      v17 = v6;
      sub_7D1320((int *)v3);
      v6->member.super.VertexConstantMap->_vtbl->sub_9A97B0(v6->member.super.VertexConstantMap);
      v6->member.super.PixelConstantMap->_vtbl->sub_9A97B0(v6->member.super.PixelConstantMap);
      if ( v6 != shader )
      {
        shader->member.super.VertexConstantMap->_vtbl->sub_9A97B0(shader->member.super.VertexConstantMap);
        PixelConstantMap = shader->member.super.PixelConstantMap;
LABEL_14:
        PixelConstantMap->_vtbl->sub_9A97B0(PixelConstantMap);
      }
    }
  }
  if ( byte_B2BB7C )
  {
    if ( v3 == 0x48 || v3 == 0x49 || v3 >= 0x168 && v3 <= 0x175 )
    {
      sub_7AA550(this + 5 * (unsigned __int16)a2 + 0x41, (int (__cdecl *)(_DWORD *, _DWORD *))sub_7AA390);
      sub_7F6FC0(*(this + 0x899), this + 5 * (unsigned __int16)a2 + 0x41, v3);
      return;
    }
    if ( v3 == 0xC || v3 == 0xD || v3 >= 0x195 && v3 <= 0x197 )
    {
      sub_7AA550(this + 5 * (unsigned __int16)a2 + 0x41, (int (__cdecl *)(_DWORD *, _DWORD *))sub_7AA390);
      sub_7F7680(*(this + 0x899), this + 5 * (unsigned __int16)a2 + 0x41, v3);
      return;
    }
    switch ( v3 )
    {
      case 0x54u:
      case 0x5Fu:
      case 0x6Au:
      case 0x75u:
      case 0x82u:
      case 0x90u:
      case 0x9Du:
      case 0xAAu:
      case 0xB8u:
      case 0xC5u:
      case 0xD2u:
      case 0xDFu:
      case 0xEEu:
      case 0xF5u:
      case 0xFCu:
      case 0x103u:
      case 0x10Bu:
      case 0x11Bu:
      case 0x122u:
      case 0x129u:
      case 0x194u:
      case 0x18u:
      case 0x2Fu:
      case 0x30u:
      case 0x33u:
      case 0xE7u:
      case 0x113u:
      case 0x114u:
        sub_7AA550(this + 5 * (unsigned __int16)a2 + 0x41, (int (__cdecl *)(_DWORD *, _DWORD *))sub_7AA390);
        sub_7F7EE0(*(this + 0x899), this + 5 * (unsigned __int16)a2 + 0x41, v3);
        return;
      case 0xEu:
        sub_7AA550(this + 5 * (unsigned __int16)a2 + 0x41, (int (__cdecl *)(_DWORD *, _DWORD *))sub_7AA390);
        sub_7F86C0(*(this + 0x899), this + 5 * (unsigned __int16)a2 + 0x41, 0xE);
        return;
      case 0x17Bu:
        sub_7AA550(this + 5 * (unsigned __int16)a2 + 0x41, (int (__cdecl *)(_DWORD *, _DWORD *))sub_7AA390);
        sub_7F8DB0(*(this + 0x899), this + 5 * (unsigned __int16)a2 + 0x41, 0x17B);
        return;
    }
  }
  v8 = v5[0x42];
  v9 = (int *)v8[2];
  v19 = (_DWORD *)*v8;
  if ( OcclusionCullngBool && (v10 = *(this + 0x87C)) != 0 )
  {
    while ( 1 )
    {
      v11 = *v9 == v10[2];
      v12 = v10 + 2;
      v10 = (_DWORD *)*v10;
      if ( v11 )
        break;
      if ( !v10 )
        goto LABEL_65;
    }
  }
  else
  {
LABEL_65:
    if ( (v3 < 0x160 || v3 > 0x162) && v3 - 0x156 > 2 )
    {
      if ( *((_BYTE *)this + 0x21E2) )
      {
        if ( v17 || v18 )
          sub_7ABDE0(this + 0x885, v9);
      }
      sub_7A9820(v9, v3);
    }
    else
    {
      sub_7ABDE0(this + 0x880, v9);
    }
    ++dword_B42CBC;
    v12 = (void *)(*(unsigned __int16 (__thiscall **)(_DWORD))(**(_DWORD **)(*v9 + 0xB4) + 0x5C))(*(_DWORD *)(*v9 + 0xB4));
    dword_B42CB4 += (int)v12;
  }
  if ( v17 )
  {
    sub_7D1800(v3);
  }
  else if ( v18 )
  {
    TESTexture::ClearComponentReferences(v12);
  }
  while ( v19 )
  {
    v13 = (int *)v19[2];
    v19 = (_DWORD *)*v19;
    if ( OcclusionCullngBool && (v14 = *(this + 0x87C)) != 0 )
    {
      while ( 1 )
      {
        v11 = *v13 == v14[2];
        v14 = (_DWORD *)*v14;
        if ( v11 )
          break;
        if ( !v14 )
          goto LABEL_86;
      }
    }
    else
    {
LABEL_86:
      if ( (v3 < 0x160 || v3 > 0x162) && v3 - 0x156 > 2 )
      {
        if ( *((_BYTE *)this + 0x21E2) )
        {
          if ( v17 || v18 )
            sub_7ABDE0(this + 0x885, v13);
        }
        sub_7A9820(v13, v3);
      }
      else
      {
        sub_7ABDE0(this + 0x880, v13);
      }
      ++dword_B42CBC;
      dword_B42CB4 += (*(unsigned __int16 (__thiscall **)(_DWORD))(**(_DWORD **)(*v13 + 0xB4) + 0x5C))(*(_DWORD *)(*v13 + 0xB4));
    }
  }
  if ( !byte_B42CDA )
  {
    v15 = this + 5 * (unsigned __int16)a2 + 0x41;
    sub_7A9C30((int)v15);
    v15[3] = v15[1];
    v15[1] = 0;
    v15[2] = 0;
    v15[4] = 0;
  }
}
