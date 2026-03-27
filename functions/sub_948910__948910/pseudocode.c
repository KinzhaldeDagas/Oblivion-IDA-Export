int __thiscall sub_948910(_DWORD **this, Concurrency::details::InternalContextBase *a2)
{
  int v2; // ebx
  int result; // eax
  _OWORD *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char v11; // al
  char *v12; // eax
  char *v13; // eax
  char *v14; // eax
  char Proxy; // al
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  _DWORD *v19; // eax
  float v20; // [esp+0h] [ebp-84h]
  float v21; // [esp+0h] [ebp-84h]
  float v22; // [esp+0h] [ebp-84h]
  float v23; // [esp+0h] [ebp-84h]
  float v24; // [esp+0h] [ebp-84h]
  __int128 v25; // [esp+14h] [ebp-70h] BYREF
  __int128 v26; // [esp+24h] [ebp-60h] BYREF
  __int128 v27; // [esp+34h] [ebp-50h] BYREF
  __int128 v28; // [esp+44h] [ebp-40h] BYREF
  __int128 v29; // [esp+54h] [ebp-30h] BYREF
  __int128 v30; // [esp+64h] [ebp-20h] BYREF
  __int128 v31; // [esp+74h] [ebp-10h] BYREF

  v2 = *((_DWORD *)a2 + 0x15);
  sub_9181B0(this, v2);
  switch ( v2 )
  {
    case 1:
      sub_948810(this, (__int128 *)a2 + 1);
      v5 = sub_94D240(a2, &v25);
      sub_918440(this, *((_DWORD *)v5 + 3));
      v6 = (char *)sub_94D240(a2, &v26);
      sub_918480(this, v6, 3);
      sub_918440(this, *((_DWORD *)a2 + 0x1C));
      result = sub_918440(this, *((_DWORD *)a2 + 0x1D));
      break;
    case 2:
      sub_948810(this, (__int128 *)a2 + 1);
      result = sub_918480(this, (char *)a2 + 0x60, 3);
      break;
    case 3:
      v7 = (char *)sub_94D5D0((char *)a2);
      sub_918480(this, v7, 3);
      v8 = (char *)sub_9492D0((char *)a2);
      result = sub_918480(this, v8, 3);
      break;
    case 4:
      v9 = (char *)sub_94D240(a2, &v27);
      sub_918480(this, v9, 3);
      v10 = (char *)sub_94DAD0(a2, &v28);
      sub_918480(this, v10, 3);
      v20 = sub_94DA70((float *)a2);
      sub_918440(this, SLOBYTE(v20));
      v21 = sub_94DA60((float *)a2);
      sub_918440(this, SLOBYTE(v21));
      v11 = sub_94DA80(a2);
      result = sub_918440(this, v11);
      break;
    case 5:
      v12 = (char *)sub_94D250(a2, &v29);
      sub_918480(this, v12, 3);
      v13 = (char *)sub_94D240(a2, &v30);
      sub_918480(this, v13, 3);
      v14 = (char *)sub_94DAD0(a2, &v31);
      sub_918480(this, v14, 3);
      v22 = sub_94D1D0((float *)a2);
      sub_918440(this, SLOBYTE(v22));
      v23 = sub_94D1B0((float *)a2);
      sub_918440(this, SLOBYTE(v23));
      v24 = sub_94D1C0((float *)a2);
      sub_918440(this, SLOBYTE(v24));
      Proxy = (unsigned __int8)Concurrency::details::InternalContextBase::GetProxy(a2);
      result = sub_918440(this, Proxy);
      break;
    case 6:
      sub_948810(this, (__int128 *)a2 + 1);
      result = sub_948880(this, *((_DWORD **)a2 + 0x14));
      break;
    case 7:
      v16 = (char *)sub_9492D0((char *)a2);
      sub_918480(this, v16, 3);
      v17 = (char *)sub_94D5D0((char *)a2);
      sub_918480(this, v17, 3);
      v18 = (char *)sub_94D5E0((char *)a2);
      sub_918480(this, v18, 3);
      v19 = (_DWORD *)sub_94D5F0((char *)a2);
      sub_918440(this, *v19);
      result = def_948936(a2);
      break;
    case 8:
    case 9:
      sub_948810(this, (__int128 *)a2 + 1);
      sub_918440(this, *((_DWORD *)a2 + 0x20));
      sub_918480(this, (char *)a2 + 0x60, 3);
      sub_918480(this, (char *)a2 + 0x70, 3);
      sub_918440(this, *((_DWORD *)a2 + 0x21));
      result = sub_918440(this, *((_DWORD *)a2 + 0x22));
      break;
    default:
      JUMPOUT(0x948B93);
  }
  return result;
}
