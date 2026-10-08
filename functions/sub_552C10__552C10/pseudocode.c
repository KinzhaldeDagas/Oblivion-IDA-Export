// Computes the NPC-persisted delta = adjusted absolute parameters - race base for each active matrix. Prettier Faces 1.19.7 audit: curation must score actual post-projection race-relative coefficients. Applying soft compression again only to score/history (without applying it to output) understates real tails/spikes. Candidate capture limits once; scoring now measures the resulting coefficients directly.
void __cdecl FaceGenHeadParameters_ComputeRaceDelta(
        const FaceGenHeadParameters *raceParameters,
        const FaceGenHeadParameters *absoluteParameters,
        FaceGenHeadParameters *outDelta)
{
  const FaceGenHeadParameters *v3; // edi
  int v4; // ebx
  int v5; // ebp
  unsigned int *p_columns; // esi
  unsigned int rows; // eax
  unsigned int v8; // ecx
  FaceGenMatrix *v9; // eax
  int v10; // [esp+18h] [ebp-2Ch]
  int v11; // [esp+1Ch] [ebp-28h]
  FaceGenMatrix outDifference; // [esp+20h] [ebp-24h] BYREF
  unsigned int v13; // [esp+40h] [ebp-4h]
  int raceParametersa; // [esp+48h] [ebp+4h]

  v3 = raceParameters; /*0x552c37*/
  if ( raceParameters ) /*0x552c3d*/
  {
    if ( absoluteParameters ) /*0x552c49*/
    {
      if ( outDelta ) /*0x552c55*/
      {
        v4 = (char *)raceParameters - (char *)outDelta; /*0x552c5d*/
        v11 = (char *)raceParameters - (char *)outDelta; /*0x552c5f*/
        v5 = (char *)absoluteParameters - (char *)raceParameters; /*0x552c63*/
        p_columns = &outDelta->matrices[0].columns; /*0x552c65*/
        v10 = 2; /*0x552c68*/
        do /*0x552d1a*/
        {
          raceParametersa = 2; /*0x552c70*/
          do /*0x552d0f*/
          {
            rows = v3->matrices[0].rows; /*0x552c78*/
            if ( v3->matrices[0].rows && (v8 = *(unsigned int *)((char *)p_columns + v4)) != 0 ) /*0x552c85*/
            {
              p_columns[0xFFFFFFFF] = rows; /*0x552c8a*/
              *p_columns = v8; /*0x552c90*/
              FaceGenFloatVector_ResizeFill(p_columns + 1, (int)v3, v8 * rows, COERCE_INT(0.0)); /*0x552c99*/
              v9 = FaceGenMatrix_Subtract( /*0x552ca7*/
                     (const FaceGenMatrix *)((char *)v3->matrices + v5),
                     &outDifference,
                     v3->matrices);             // Subtracts the race matrix from the adjusted randomized absolute matrix. This delta space is what TESNPC persists.
              v13 = 0; /*0x552caf*/
              FaceGenMatrix_Assign(p_columns + 0xFFFFFFFF, (int)(p_columns + 0xFFFFFFFF), v9);// Assigns the temporary matrix difference into the corresponding output delta slot. /*0x552cb7*/
              v13 = 0xFFFFFFFF; /*0x552cc4*/
              if ( outDifference.begin ) /*0x552ccc*/
                FormHeapFree((unsigned int)outDifference.begin); /*0x552ccf*/
              memset(&outDifference.begin, 0, 0xC); /*0x552cd7*/
              v4 = v11; /*0x552ce3*/
            }
            else
            {
              p_columns[0xFFFFFFFF] = 0; /*0x552cf2*/
              *p_columns = 0; /*0x552cf9*/
              FaceGenFloatVector_ResizeFill(p_columns + 1, (int)v3, 0, COERCE_INT(0.0)); /*0x552cff*/
            }
            v3 = (const FaceGenHeadParameters *)((char *)v3 + 0x18); /*0x552d04*/
            p_columns += 6; /*0x552d07*/
            --raceParametersa; /*0x552d0a*/
          }
          while ( raceParametersa ); /*0x552d0f*/
          --v10; /*0x552d15*/
        }
        while ( v10 ); /*0x552d1a*/
      }
    }
  }
}
