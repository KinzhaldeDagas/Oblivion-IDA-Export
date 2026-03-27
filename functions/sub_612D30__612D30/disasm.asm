0x612D30: cmp     byte ptr [ecx+15Ah], 0
0x612D37: jz      short locret_612D58
0x612D39: fld     dword ptr [ecx+44h]
0x612D3C: fsub    dword ptr [ecx+164h]
0x612D42: fld     dword ptr [ecx+168h]
0x612D48: fcompp
0x612D4A: fnstsw  ax
0x612D4C: test    ah, 5
0x612D4F: jp      short locret_612D58
0x612D51: mov     byte ptr [ecx+15Ah], 0
0x612D58: retn
