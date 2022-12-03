#include <stdint.h>

typedef struct {
  uint8_t  versionAndHeaderLength;
  uint8_t  typeOfService;
  uint16_t totalLength;
  uint16_t identification;
  uint16_t fragment;
  uint8_t  ttl;
  uint8_t  protocol;
  uint16_t checksum;
  uint32_t source_address;
  uint32_t destination_address;
} ipHeader;
