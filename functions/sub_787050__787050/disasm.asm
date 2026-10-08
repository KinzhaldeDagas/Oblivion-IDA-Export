0x787050: mov     ecx, [ecx+34h]; CSpeedTreeRT::InstanceOf. Oblivion returns instanceData->parent for instances and NULL for base trees; this matches the later Fallout symbol and 4.1 API contract.
0x787053: xor     eax, eax
0x787055: test    ecx, ecx
0x787057: jz      short locret_78705B
0x787059: mov     eax, [ecx]
0x78705B: retn
