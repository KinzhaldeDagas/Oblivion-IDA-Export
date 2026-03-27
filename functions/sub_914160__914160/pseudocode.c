int __cdecl sub_914160(int a1, int a2)
{
  char v2; // al
  int v3; // esi
  int v4; // edi
  int v5; // esi
  _DWORD v7[2]; // [esp+10h] [ebp-C0h] BYREF
  int v8; // [esp+18h] [ebp-B8h]
  int v9; // [esp+1Ch] [ebp-B4h]
  int v10; // [esp+20h] [ebp-B0h]
  float v11; // [esp+30h] [ebp-A0h] BYREF
  float v12; // [esp+34h] [ebp-9Ch]
  float v13; // [esp+38h] [ebp-98h]
  __int128 v14; // [esp+40h] [ebp-90h] BYREF
  int v15; // [esp+50h] [ebp-80h]
  _DWORD v16[4]; // [esp+60h] [ebp-70h] BYREF
  _DWORD v17[24]; // [esp+70h] [ebp-60h] BYREF

  sub_943420(v16, a1);
  sub_943800(v17, 0);
  sub_9438E0(v7, 0);
  v2 = *(_BYTE *)(a2 + 0x2C);
  v7[0] = 0x3F800000;
  if ( !v2 )
    v10 = 0;
  sub_943680(v17, v7);
  v11 = 0.5;
  v12 = 0.2;
  v13 = 1.0;
  v15 = 4;
  strcpy((char *)&v14, "ÍÌL>ÍÌL>ÍÌL=");
  BYTE13(v14) = 0;
  HIWORD(v14) = 0;
  v11 = sub_914320((float *)a2);
  v12 = sub_914330((float *)a2);
  v13 = sub_9142E0((float *)a2);
  v14 = *(_OWORD *)sub_9142F0((_DWORD *)a2, v7);
  sub_943860((int)v17, (int)&v11);
  sub_943890(v7, 0);
  if ( *(_BYTE *)(a2 + 0x2D) )
  {
    v8 = 0x32;
  }
  else
  {
    v7[1] = 0;
    v8 = 0;
  }
  v9 = 5;
  sub_943650(v17, v7);
  v3 = sub_9436B0(v17, (int)v16);
  v4 = (**(int (__thiscall ***)(int, int, int))dword_BA7D98)(dword_BA7D98, v3, 0x25);
  v5 = sub_9436D0(v17, (int)v16, v4, v3);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, v4);
  TESTexture::ClearComponentReferences(v17);
  sub_943450(v16);
  return v5;
}
