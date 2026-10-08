0x78ECF0: fldz; Constructs the exact 0x10-byte Oblivion CIdvCamera base: installs its vftable and zeros the three-float position at +0x04. Called as the base constructor of both CTreeEngine and CBillboardLeaf. RT4.1 exposes the same layout/behavior under the later name stCamera.
0x78ECF2: mov     eax, ecx
0x78ECF4: fst     dword ptr [eax+4]
0x78ECF7: mov     dword ptr [eax], offset ??_7CIdvCamera@@6B@; const CIdvCamera::`vftable'
0x78ECFD: fst     dword ptr [eax+8]
0x78ED00: fstp    dword ptr [eax+0Ch]
0x78ED03: retn
