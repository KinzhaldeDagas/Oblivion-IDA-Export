0x5064A0: call    DialogMenu__CommitCurrentTopicAndRefresh; External dialog-menu refresh callback: if menu 0x3F1 and its MenuTopicManager are live, processes the current info, rebuilds the topic list, then refreshes topic/service tile availability. It is not the per-response speech-completion callback.
0x5064A5: mov     al, 1
0x5064A7: retn
