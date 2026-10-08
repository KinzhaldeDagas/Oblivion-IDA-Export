// Static CSpeedTreeRT::GetCamera. Copies the process-global camera position and direction vectors to non-NULL output arrays; otherwise records the SDK error.
void __cdecl CSpeedTreeRT__GetCamera(float *positionOut3, float *directionOut3)
{
  int v2; // edi
  float v3; // ebx
  float v4; // esi
  float v5; // edi
  int v6; // ebp
  rsize_t v7; // [esp-4h] [ebp-10h]
  int v8; // [esp+4h] [ebp-8h]

  if ( positionOut3 && directionOut3 ) /*0x78b6a1*/
  {
    v3 = CSpeedTreeRT__s_cameraDirection[0]; /*0x78b6aa*/
    v4 = CSpeedTreeRT__s_cameraPosition[1]; /*0x78b6b8*/
    v5 = CSpeedTreeRT__s_cameraPosition[2]; /*0x78b6bf*/
    v8 = dword_B2B6DC; /*0x78b6c5*/
    v6 = dword_B2B6E0; /*0x78b6c9*/
    *positionOut3 = CSpeedTreeRT__s_cameraPosition[0]; /*0x78b6cf*/
    positionOut3[1] = v4; /*0x78b6d1*/
    positionOut3[2] = v5; /*0x78b6d4*/
    *directionOut3 = v3; /*0x78b6dc*/
    *((_DWORD *)directionOut3 + 1) = v8; /*0x78b6df*/
    *((_DWORD *)directionOut3 + 2) = v6; /*0x78b6e2*/
  }
  else
  {
    LODWORD(v7) = 0x3B; /*0x78b6eb*/
    OB_stString28_AssignBytes_010201A0( /*0x78b6f7*/
      &OB_g_strError_010201A0,
      v2,
      "GetCamera() requires non-NULL position and direction values",
      v7);
  }
}
