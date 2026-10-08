0x45BB00: push    ecx; EnginePatch v2: byte-checked save-file read wrapper. Short reads are zero-filled before callers parse destination buffers.
0x45BB01: mov     ecx, [esp+4+byteCount]
0x45BB05: mov     edx, [esp+4+destination]
0x45BB09: push    1
0x45BB0B: lea     eax, [esp+8+var_4]
0x45BB0F: push    eax
0x45BB10: mov     eax, [esp+0Ch+stream]
0x45BB14: push    ecx
0x45BB15: push    edx
0x45BB16: push    eax
0x45BB17: mov     eax, [eax+4]; EngineIssues review: save-file read wrapper returns short-read count; audit callers for parsing destination buffers without zero-fill or byte-count validation.
0x45BB1A: mov     [esp+18h+var_4], 1
0x45BB22: call    eax
0x45BB24: add     esp, 18h
0x45BB27: retn    0Ch
