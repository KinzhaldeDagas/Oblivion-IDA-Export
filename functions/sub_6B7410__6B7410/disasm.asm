0x6B7410: mov     eax, ecx; Initializes an empty 0x10 ConversationView: clears item list, current-item cursor, and reserved +0x0C state. Used before modern serialized load.
0x6B7412: xor     ecx, ecx
0x6B7414: mov     [eax], ecx
0x6B7416: mov     [eax+4], ecx
0x6B7419: mov     [eax+0Ch], ecx
0x6B741C: mov     [eax+8], ecx
0x6B741F: retn
