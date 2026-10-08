void __stdcall sub_5C25C0(unsigned __int8 *a1)
{
  unsigned __int8 *v5; // edi
  int v6; // ebp
  unsigned int ***ContainerExtraDataForRef; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // esi

  v5 = a1; /*0x5c25c2*/
  if ( sub_5C1100() >= 0 && sub_5C1100() <= 7 ) /*0x5c25e3*/
  {
    if ( v5 ) /*0x5c25f2*/
    {
      if ( unk_B3B44C[4 * sub_5C1100()] ) /*0x5c2600*/
      {
        v6 = *(_DWORD *)(unk_B3B444[4 * sub_5C1100()] + 8); /*0x5c2618*/
        if ( v6 ) /*0x5c261d*/
        {
          if ( *(_BYTE *)(v6 + 4) != 0x10 ) /*0x5c2623*/
          {
            TESObjectREFR_GetContainer((TESObjectREFR *)reference); /*0x5c262b*/
            ContainerExtraDataForRef = (unsigned int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)reference); /*0x5c263d*/
            if ( ContainerExtraDataForRef ) /*0x5c2644*/
            {
              v8 = sub_5C1100(); /*0x5c2646*/
              sub_4895B0(ContainerExtraDataForRef, v6, v8); /*0x5c264f*/
            }
          }
        }
      }
      if ( unk_B3B44C[4 * sub_5C1100()] >= 1 ) /*0x5c2663*/
      {
        v9 = sub_5C1100(); /*0x5c2676*/
        NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&MEMORY[0xB3B440][0x10 * v9]); /*0x5c2686*/
      }
      else
      {
        sub_5C1DD0(v5); /*0x5c266a*/
      }
      v10 = sub_5C1100(); /*0x5c2690*/
      NiTPointerList__AddTail((BSTextureManager *)&MEMORY[0xB3B440][0x10 * v10], (void **)&a1); /*0x5c26a0*/
      byte_B3B418[0x24] = 1; /*0x5c26a5*/
    }
    v11 = sub_5C1100(); /*0x5c26ba*/
    sub_5E99C0((TESObjectREFR *)reference, v5, 1, 0); /*0x5c26bc*/
    byte_B3B418[v11] = 1; /*0x5c26c1*/
  }
}
