//
//  AIRGoogleMap.h
//  AirMaps
//
//  Created by Gil Birman on 9/1/16.
//

#import <UIKit/UIKit.h>
#import "RCTComponent.h"
#import <GoogleMaps/GoogleMaps.h>
#import <MapKit/MapKit.h>
#import "RCTConvert+MapKit.h"
#import "AIRGMSMarker.h"

@interface AIRGoogleMap : GMSMapView

// TODO: don't use MK region?
@property (nonatomic, assign) MKCoordinateRegion initialRegion;
@property (nonatomic, copy) RCTBubblingEventBlock onMarkerPress;

- (void)didTapMarker:(GMSMarker *)marker;

@end