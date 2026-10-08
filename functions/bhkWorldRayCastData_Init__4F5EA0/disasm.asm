0x4F5EA0: fld1; TES4 authoritative: bhkWorldRayCastData::Init. Raycast input From at +0x00, To at +0x10, enable/filter at +0x20/+0x24, output hit fraction at +0x44, root collidable at +0x50, extra collector pointers at +0x70/+0x74/+0x78.
0x4F5EA2: mov     eax, ecx
0x4F5EA4: xor     ecx, ecx
0x4F5EA6: mov     [eax+20h], cl
0x4F5EA9: mov     [eax+24h], ecx
0x4F5EAC: fstp    dword ptr [eax+44h]
0x4F5EAF: mov     [eax+50h], ecx
0x4F5EB2: mov     [eax+70h], ecx
0x4F5EB5: mov     [eax+74h], ecx
0x4F5EB8: mov     [eax+78h], ecx
0x4F5EBB: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x4F5EC2: movaps  xmmword ptr [eax+60h], xmm0; bhkWorldRayCastData must be 16-byte aligned: Init stores sentinel vector at +0x60 with movaps.
0x4F5EC6: retn
