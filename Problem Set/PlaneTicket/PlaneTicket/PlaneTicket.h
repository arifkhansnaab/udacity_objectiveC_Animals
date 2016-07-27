//
//  PlaneTicket.h
//  PlaneTicket
//
//  Created by Gabrielle Miller-Messner on 4/12/16.
//  Copyright © 2016 Gabrielle Miller-Messner. All rights reserved.
//

@import Foundation;
#import "Passenger.h"

@interface PlaneTicket : NSObject

@property (nonatomic, copy) NSString * _Nullable departureCity;
@property (nonatomic, copy) NSString * _Nullable destination;
@property (nonatomic)       NSDate * _Nullable departureDate;
@property (nonatomic, copy) NSString * _Nullable seatAssignment;
@property (nonatomic) Passenger * _Nullable passenger;

-(instancetype)initWithDestination:(NSString* _Nullable)destination
                     departureCity:(NSString* _Nullable)departureCity
                         passenger:(Passenger* _Nullable)person
                              date:(NSDate* _Nullable)departureDate;

@end
