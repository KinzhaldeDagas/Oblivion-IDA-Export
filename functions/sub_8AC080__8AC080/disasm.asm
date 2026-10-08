0x8AC080: mov     eax, ecx; Writes low-level Havok object position via 0x8ABAC0 with wrapper vertical/shape adjustment from +0x58/+0x5C.
0x8AC082: mov     ecx, [eax+30h]
0x8AC085: test    ecx, ecx
0x8AC087: jz      short locret_8AC09D
0x8AC089: fld     dword ptr [eax+5Ch]
0x8AC08C: push    ecx
0x8AC08D: fadd    dword ptr [eax+58h]
0x8AC090: mov     eax, [esp+4+arg_0]
0x8AC094: fstp    [esp+4+var_4]; float
0x8AC097: push    eax; int
0x8AC098: call    sub_8ABAC0; Low-level position writer: stores target at object+0xA0 and updates Havok transform when shape data exists.
0x8AC09D: retn    4
