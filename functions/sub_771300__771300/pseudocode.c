unsigned int __cdecl sub_771300(int (*a1)(), unsigned int a2)
{
  int v2; // esi
  int (*v4)(); // ecx
  int (__cdecl *v5)(size_t); // eax

  v2 = *(_DWORD *)(*(_DWORD *)(dword_B42700 + 4) + 4 * (_DWORD)a1);
  if ( !a2 )
  {
    a1 = nullsub_return0_0arg;
    return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(v2 + 4), 0, &a1);
  }
  if ( (unsigned int)a1 > 3 )
  {
    if ( a1 == (int (*)())4 )
    {
      switch ( a2 )
      {
        case 1u:
        case 2u:
        case 6u:
        case 7u:
        case 8u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x11u:
        case 0x12u:
        case 0x13u:
          goto LABEL_44;
        case 3u:
        case 4u:
        case 0x1Du:
        case 0x1Eu:
        case 0x1Fu:
        case 0x20u:
          v5 = (int (__cdecl *)(size_t))sub_76EEB0;
          goto LABEL_45;
        case 5u:
          v5 = (int (__cdecl *)(size_t))sub_76F0D0;
          goto LABEL_45;
        case 9u:
          v5 = (int (__cdecl *)(size_t))sub_76F0D0;
          goto LABEL_45;
        case 0x10u:
          v5 = (int (__cdecl *)(size_t))sub_76F110;
          goto LABEL_45;
        case 0x14u:
          v5 = (int (__cdecl *)(size_t))sub_76F1C0;
          goto LABEL_45;
        case 0x15u:
        case 0x16u:
        case 0x17u:
        case 0x18u:
          v5 = (int (__cdecl *)(size_t))sub_76F2A0;
          goto LABEL_45;
        case 0x19u:
        case 0x1Au:
        case 0x1Bu:
        case 0x1Cu:
          v5 = (int (__cdecl *)(size_t))sub_76F3B0;
          goto LABEL_45;
        default:
          goto LABEL_47;
      }
    }
    if ( a1 == (int (*)())6 || a1 == (int (*)())7 )
    {
      switch ( a2 )
      {
        case 1u:
        case 2u:
        case 3u:
        case 4u:
          v5 = (int (__cdecl *)(size_t))sub_7701E0;
          goto LABEL_45;
        case 5u:
        case 6u:
        case 7u:
        case 8u:
          v5 = (int (__cdecl *)(size_t))sub_770300;
          goto LABEL_45;
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
          v5 = (int (__cdecl *)(size_t))sub_770420;
          goto LABEL_45;
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x10u:
          v5 = (int (__cdecl *)(size_t))sub_770540;
          goto LABEL_45;
        case 0x11u:
        case 0x12u:
        case 0x13u:
        case 0x14u:
          v5 = (int (__cdecl *)(size_t))sub_770640;
          goto LABEL_45;
        case 0x15u:
        case 0x16u:
        case 0x17u:
        case 0x18u:
          v5 = (int (__cdecl *)(size_t))sub_770740;
          goto LABEL_45;
        case 0x19u:
        case 0x1Au:
        case 0x1Bu:
        case 0x1Cu:
          v5 = (int (__cdecl *)(size_t))sub_770860;
          goto LABEL_45;
        case 0x1Du:
        case 0x1Eu:
        case 0x1Fu:
        case 0x20u:
LABEL_44:
          v5 = (int (__cdecl *)(size_t))nullsub_return0_0arg;
          goto LABEL_45;
        default:
          goto LABEL_47;
      }
    }
    if ( a1 == (int (*)())5 )
    {
      switch ( a2 )
      {
        case 1u:
        case 2u:
        case 3u:
        case 4u:
          v5 = (int (__cdecl *)(size_t))sub_770980;
          goto LABEL_45;
        case 5u:
        case 6u:
        case 7u:
        case 8u:
          v5 = (int (__cdecl *)(size_t))sub_770AB0;
          goto LABEL_45;
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
          v5 = (int (__cdecl *)(size_t))sub_770BB0;
          goto LABEL_45;
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x10u:
          v5 = (int (__cdecl *)(size_t))sub_770CB0;
          goto LABEL_45;
        case 0x11u:
        case 0x12u:
        case 0x13u:
        case 0x14u:
          v5 = (int (__cdecl *)(size_t))sub_770DB0;
          goto LABEL_45;
        case 0x15u:
        case 0x16u:
        case 0x17u:
        case 0x18u:
          v5 = sub_770EB0;
          goto LABEL_45;
        case 0x19u:
        case 0x1Au:
        case 0x1Bu:
        case 0x1Cu:
          v5 = sub_770FA0;
          goto LABEL_45;
        case 0x1Du:
        case 0x1Eu:
        case 0x1Fu:
        case 0x20u:
          goto LABEL_44;
        default:
          break;
      }
    }
LABEL_47:
    JUMPOUT(0x7714D7);
  }
  v4 = (int (*)())(a2 - 1);
  switch ( a2 )
  {
    case 1u:
    case 2u:
    case 3u:
    case 4u:
      if ( v4 == a1 )
      {
        v5 = (int (__cdecl *)(size_t))sub_76E610;
      }
      else if ( (unsigned int)v4 < (unsigned int)a1 )
      {
LABEL_15:
        v5 = (int (__cdecl *)(size_t))sub_76E4B0;
      }
      else
      {
        v5 = (int (__cdecl *)(size_t))sub_76E430;
      }
      break;
    case 5u:
    case 6u:
    case 7u:
    case 8u:
      v5 = (int (__cdecl *)(size_t))sub_76E800;
      break;
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
      v5 = (int (__cdecl *)(size_t))sub_76E910;
      break;
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
      v5 = (int (__cdecl *)(size_t))sub_76EA10;
      break;
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
      v5 = (int (__cdecl *)(size_t))sub_76EB40;
      break;
    case 0x15u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
      v5 = (int (__cdecl *)(size_t))sub_76EC60;
      break;
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
      v5 = (int (__cdecl *)(size_t))sub_76ED90;
      break;
    case 0x1Du:
    case 0x1Eu:
    case 0x1Fu:
    case 0x20u:
      goto LABEL_15;
    default:
      goto LABEL_47;
  }
LABEL_45:
  a1 = (int (*)())v5;
  if ( !v5 )
    goto LABEL_47;
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(v2 + 4), a2, &a1);
  return def_77134B(a1);
}
