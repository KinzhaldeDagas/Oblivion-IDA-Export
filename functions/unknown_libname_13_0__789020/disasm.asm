0x789020: mov     ecx, [ecx+4]; Oblivion CSpeedTreeRT branch cleanup wrapper: when branchGeometry exists, clears its primary wind-weight and primary wind-matrix-index vectors via the CIndexedGeometry helper.
0x789023: test    ecx, ecx
0x789025: jz      short locret_78902C
0x789027: jmp     OB_CIndexedGeometry_ClearPrimaryWindData_010201A0; Oblivion CIndexedGeometry cleanup used after branch extraction: clears the float vector at +0xF8 and byte vector at +0x108, observed as primary wind weights and primary wind matrix indices.
0x78902C: retn
