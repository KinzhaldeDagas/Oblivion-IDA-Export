0x7F1150: mov     eax, [ecx]; SpeedTreeLeafShader vtable slot +0x90, matching the SetupPasses slot used by the Oblivion frond and branch shader vtables. Dispatches virtual slot +0x94 with the leaf shader's stored pass/setup object at this+0x394.
0x7F1152: mov     edx, [ecx+394h]
0x7F1158: mov     eax, [eax+94h]
0x7F115E: push    edx
0x7F115F: call    eax
0x7F1161: retn
