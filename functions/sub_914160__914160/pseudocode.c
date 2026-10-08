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
  int v16[4]; // [esp+60h] [ebp-70h] BYREF
  int v17[24]; // [esp+70h] [ebp-60h] BYREF

  sub_943420(v16, a1); /*0x914176*/
  sub_943800(v17, 0); /*0x914181*/
  sub_9438E0(v7, 0); /*0x91418c*/
  v2 = *(_BYTE *)(a2 + 0x2C); /*0x914194*/
  v7[0] = 0x3F800000; /*0x914199*/
  if ( !v2 ) /*0x9141a1*/
    v10 = 0; /*0x9141a3*/
  sub_943680(v17, v7); /*0x9141b4*/
  v11 = 0.5; /*0x9141bb*/
  v12 = 0.2; /*0x9141c3*/
  v13 = 1.0; /*0x9141cb*/
  v15 = 4; /*0x9141d3*/
  strcpy((char *)&v14, "ÍÌL>ÍÌL>ÍÌL="); /*0x9141db*/
  BYTE13(v14) = 0; /*0x9141eb*/
  HIWORD(v14) = 0; /*0x9141eb*/
  v11 = sub_914320((float *)a2); /*0x914200*/
  v12 = sub_914330((float *)a2); /*0x91420b*/
  v13 = sub_9142E0((float *)a2); /*0x914216*/
  v14 = *(_OWORD *)sub_9142F0((_DWORD *)a2, v7); /*0x914232*/
  sub_943860((int)v17, (int)&v11); /*0x914237*/
  sub_943890(v7, 0); /*0x914242*/
  if ( *(_BYTE *)(a2 + 0x2D) ) /*0x914247*/
  {
    v8 = 0x32; /*0x91424e*/
  }
  else
  {
    v7[1] = 0; /*0x914258*/
    v8 = 0; /*0x914260*/
  }
  v9 = 5; /*0x914271*/
  sub_943650(v17, v7); /*0x914279*/
  v3 = sub_9436B0(v17, (int)v16); /*0x914292*/
  v4 = (**(int (__thiscall ***)(int, int, int))unk_BA7D98)(unk_BA7D98, v3, 0x25); /*0x91429c*/
  v5 = sub_9436D0(v17, v16, v4, v3); /*0x9142b6*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, v4); /*0x9142b8*/
  Shared_NoOpVirtual_60D0A0(v17); /*0x9142bf*/
  sub_943450(v16); /*0x9142c8*/
  return v5; /*0x9142cd*/
}
